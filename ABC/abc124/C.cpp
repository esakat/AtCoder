#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string S;
    cin >> S;
    int ans = 0;

    int ptn_A = 0; // 010101..
    int ptn_B = 0; // 101010..

    int Len = S.length();

    for(int i=0; i < Len; i++) {
        char c = S[i];

        if (i % 2 == 0 && c == '1') {
            ptn_A += 1;
        }

        if (i % 2 == 0 && c == '0') {
            ptn_B += 1;
        }

        if (i % 2 == 1 && c == '0') {
            ptn_A += 1;
        }

        if (i % 2 == 1 && c == '1') {
            ptn_B += 1;
        }
    }

    ans = min(ptn_A, ptn_B);

    cout << ans << endl;

    return 0;
}