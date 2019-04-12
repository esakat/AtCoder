#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int N, A, B, C, D, E;
    cin >> N >> A >> B >> C >> D >> E;

    long int min_through, max_wait;

    min_through = min(A, min(B, min(C, min(D, E))));

    long int five = 5;

    if ( min_through == 1 ) {
      max_wait = N / min_through + five - 1;
    } else {
      max_wait = N / min_through + five;
    }

    // 出力
    cout << max_wait << endl;
}