#include<iostream>
// #include <bits/stdc++.h>
#include<vector>

using namespace std;







// Calculate number of parity bits required
int calcParityBits(int k) {
    int m = 1;
    while ((1 << m) < (m + k + 1)) {
        m++;
    }
    return m;
}
// Encode data bits into Hamming Code (even parity)
vector<int> encodeHamming(const vector<int> &data) {
    int k = data.size();
    int m = calcParityBits(k);
    int n = k + m;

    vector<int> code(n + 1, 0); // 1-indexed
    int j = 0;

    // Step 1: Place data bits in non-parity positions
    for (int i = 1; i <= n; i++) {
        if ((i & (i - 1)) != 0) {
            code[i] = data[j++];
        }
    }
    // Step 2: Compute parity bits
    for (int p = 0; p < m; p++) {
        int pos = 1 << p;
        int xor_sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i & pos) xor_sum ^= code[i];
        }
        code[pos] = xor_sum; // even parity
    }
    // Drop index 0
    return vector<int>(code.begin() + 1, code.end());
}
// Introduce error (flip bit at position pos, 1-indexed)
vector<int> introduceError(const vector<int> &codeword, int pos) {
    vector<int> result = codeword;
    if (pos >= 1 && pos <= (int)result.size()) {
        result[pos - 1] ^= 1;
    }
    return result;
}
// Decode Hamming Code, detect & correct single-bit error
struct DecodeResult {
    int errorPos;
    vector<int> correctedCodeword;
    vector<int> dataBits;
};

DecodeResult decodeHamming(const vector<int> &codeword) {
    int n = codeword.size();
    vector<int> code(n + 1, 0);
    for (int i = 0; i < n; i++) code[i + 1] = codeword[i];

    int m = 0;
    while ((1 << m) <= n) m++;

    // Step 1: Compute syndrome
    int syndrome = 0;
    for (int p = 0; p < m; p++) {
        int pos = 1 << p;
        int xor_sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i & pos) xor_sum ^= code[i];
        }
        if (xor_sum != 0) syndrome += pos;
    }
    // Step 2: Correct error if found
    vector<int> corrected = code;
    if (syndrome != 0 && syndrome <= n) {
        corrected[syndrome] ^= 1;
    }
    // Step 3: Extract data bits
    vector<int> data;
    for (int i = 1; i <= n; i++) {
        if ((i & (i - 1)) != 0) data.push_back(corrected[i]);
    }
    return {syndrome, vector<int>(corrected.begin() + 1, corrected.end()), data};
}

int main() {
    // Example dataword
    vector<int> data = {1, 0, 1, 1};

    cout << "Original Dataword:   ";
    for (int b : data) cout << b << " ";
    cout << "\n";

    // Encode
    vector<int> codeword = encodeHamming(data);
    cout << "Hamming Codeword:    ";
    for (int b : codeword) cout << b << " ";
    cout << "\n";

    // Introduce error at position 5
    vector<int> received = introduceError(codeword, 5);
    cout << "Received (with err): ";
    for (int b : received) cout << b << " ";
    cout << "\n";

    // Decode
    DecodeResult result = decodeHamming(received);
    cout << "Detected error at:   " << result.errorPos << "\n";
    cout << "Corrected Codeword:  ";
    for (int b : result.correctedCodeword) cout << b << " ";
    cout << "\n";
    cout << "Recovered Dataword:  ";
    for (int b : result.dataBits) cout << b << " ";
    cout << "\n";

    return 0;
}