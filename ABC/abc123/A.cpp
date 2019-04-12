#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    if (e - a > k) {
      cout << ":(" << endl;
    } else if (d - a > k) {
      cout << ":(" << endl;
    } else if (d - a > k) {
      cout << ":(" << endl;
    } else if (c - a > k) {
      cout << ":(" << endl;
    } else if (b - a > k) {
      cout << ":(" << endl;
    } else {
      cout << "Yay!" << endl;
    }
}