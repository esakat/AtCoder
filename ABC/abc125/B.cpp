#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> C(N);
    vector<int> V(N);

    for(int i=0; i < N; i++) {
        cin >> V.at(i);
    }
    for(int i=0; i < N; i++) {
        cin >> C.at(i);
    }

    int ans = 0;
    for(int i=0; i < N; i++) {
        int tmp = V.at(i) - C.at(i);
        if(tmp > 0) {
            ans += tmp;
        }
    }

    cout << ans << endl;

    return 0;
}

