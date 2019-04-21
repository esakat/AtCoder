#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if(a < c && c < b) {
        cout << "Yes" << endl;
        return 0;
    }

    if (a > c && c > b) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;

    return 0;
}