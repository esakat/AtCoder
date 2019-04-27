#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int A,B,T;

    cin >> A >> B >> T;

    int ans = T / A * B;

    cout << ans << endl;

    return 0;
}

