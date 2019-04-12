#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int a, b, c, d, e, ans;

    if (A % 10 != 0) a = 10 - A % 10;
    else a = 0;
    if (B % 10 != 0) b = 10 - B % 10;
    else b = 0;
    if (C % 10 != 0) c = 10 - C % 10;
    else c = 0;
    if (D % 10 != 0) d = 10 - D % 10;
    else d = 0;
    if (E % 10 != 0) e = 10 - E % 10;
    else e = 0;

    ans = A + B + C + D + E + a + b + c + d + e - max(a, max(b, max(c, max(d, e))));
   
    cout << ans << endl;
}