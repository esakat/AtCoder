#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, int> P;

int main() {

    int i = 7;

    if(i & 1) {
        cout << "0" << endl;
    }
    if(i >> 1 & 1) {
        cout << "1" << endl;
    }
    if (i >> 2 & 1) {
        cout << "2" << endl;
    }
    if (i >> 3 & 1) {
        cout << "3" << endl;
    }

    return 0;
}

