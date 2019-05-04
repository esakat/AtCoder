#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    int now_dollar=0;
    for(int i=0; i * 4 < 100; i++) {
        for(int j=0; j * 7 < 100; j++) {
            if(((4*i) + (7*j) == N)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

