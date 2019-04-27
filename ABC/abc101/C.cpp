#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int min_num_index = 0;
    int ans = 0;

    vector<int> A(N);
    for(int i=0; i < N; i++) {
        cin >> A.at(i);
        if (A.at(i) == 1) {
            min_num_index = A.at(i);
        }
    }

    // 最初だけ考慮が必要
    if(min_num_index <= K || (N - min_num_index - 1) <= K) {
        ans++;
        ans += (N - K + (K-2)) / (K-1);
    } else {
        ans += (N + (K-2)) / (K-1) ;
    }


    cout << ans << endl;

    return 0;
}
