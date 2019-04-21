#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int n[N];
    for(int i=0; i < N; i++) {
        cin >> n[i];
    }

    int ans = 0;
    bool flag = true;

    while(flag) {
        for(int i=0; i < N; i++) {
            if(n[i] % 2 != 0) {
                flag = false;
            }
            n[i] /= 2;
        }
        if(flag) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}