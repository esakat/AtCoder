#include <iostream>
using namespace std;

int main() {
    int A,B,X;
    cin >> A >> B;

    if (A >= B) {
        X += A;
        A -= 1;
    } else {
        X += B;
        B -= 1;
    }

    if (A >= B) {
        X += A;
        A -= 1;
    } else {
        X += B;
        B -= 1;
    }

    cout << X << endl;

    return 0;
}