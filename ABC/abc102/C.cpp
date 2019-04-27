#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);

    int ans = 0;
    int sum = 0;
    for(int i=1; i <= N; i++) {
        int tmp;
        cin >> tmp;
        ans += abs(tmp - i);
        sum += tmp - i;
        vec.at(i) = tmp;
    }

    // ソート
    sort(vec.begin(), vec.end());
    int b = 0;
    if(sum > 0) {
        b = (sum + (N-1)) / N;
        cout << ans - (b * N) << endl;
    } else {
        b = (sum - (N-1)) / N;
        cout << abs(ans + (b * N)) << endl;
    }

    return 0;
}