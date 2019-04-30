#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;

    int tmp = 0;
    int ans = 0;

    for(int i=0; i < N; i++) {
        cin >> tmp;
        ans += tmp - 1;
    }

    cout << ans << endl;

    return 0;
}

