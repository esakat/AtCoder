#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int N;
    cin >> N
    vector<int> a[N];
    for(int i=0; i<N; i++) {
        cin >> a.at(i);
    }

    cin >> N >> S >> K;

    char c = S.at(K-1);

    ans = "";

    for(int i=0; i < S.size(); i++) {
        if(S.at(i) != c) {
            ans += "*";
        } else {
            ans += c;
        }
    }

    cout << ans << endl;

    return 0;
}