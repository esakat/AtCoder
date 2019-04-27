#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
    return y ? gcd(y, x%y) : x;
}

int main() {
    int N; cin >> N;
    vector<int> a(N);
    for(int i=0; i < N; i++) cin >> a[i];

    vector<int> left(N+1, 0), right(N+1, 0);
    for(int i=0; i<N; i++) left[i+1] = gcd(left[i], a[i]);
    for(int i=N-1; i >= 0; i--) right[i] = gcd(right[i+1], a[i]);

    int ans = 0;
    for(int i=0; i < N; i++) {
        int l = left[i];
        int r = right[i+1];
        ans = max(ans, gcd(l, r));
    }

    cout << ans << endl;
}

