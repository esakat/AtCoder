#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> A(3);
    for(int i=0; i < 3; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int ans = 0;
    for(int i=0; i < 2; i++) {
        ans += abs(A[i] - A[i+1]);
    }

    cout << ans << endl;

    return 0;
}
