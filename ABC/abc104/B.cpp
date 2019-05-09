#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;
    string ans = "AC";

    if(S.at(0) != 'A') {
        cout << "WA" << endl;
        return 0;
    }
    int count = 0;
    for(int i=2; i < S.size()-1; i++) {
        if(S.at(i) == 'C') {
            count++;
        } else if(!islower(S.at(i))) {
            cout << "WA" << endl;
            return 0;
        }
    }
    if(count != 1) {
        cout << "WA" << endl;
        return 0;
    }

    if(!islower(S.at(S.size()-1))) {
        cout << "WA" << endl;
        return 0;
    }
    if(!islower(S.at(1))) {
        cout << "WA" << endl;
        return 0;
    }

    cout << "AC" << endl;

    return 0;
}

