#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans =  (int)(s[0] - '0') + (int)(s[1] - '0') + (int)(s[2] - '0');

    cout << ans << endl;

    return 0;
}