#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    for(int i=0; i < 4; i++) {
        if(s.at(i) == '+') {
            ans++;
        } else {
            ans--;
        }
    }

    cout << ans << endl;

    return 0;
}
