#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    if(N % K == 0) {
        cout << 0 << endl;
    } else {
        cout << 1 << endl;
    }
    return 0;
}

