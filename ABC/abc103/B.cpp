#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S, T;

    cin >> S >> T;

    for(int i=0; i < S.size(); i++) {
        if(T.at(i) == S.at(0)) {
            bool flag = true;
            for(int j=0; j < S.size(); j++) {
                int tmp = i+j;
                if(tmp >= S.size()) tmp -= S.size();
                if(S.at(j) != T.at(tmp)) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }


    cout << "No" << endl;

    return 0;
}

