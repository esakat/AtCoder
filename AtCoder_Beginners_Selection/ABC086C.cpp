#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    // 現在時刻
    int now_t = 0;
    int now_x = 0;
    int now_y = 0;

    for(int i=0; i < N; i++) {
        int t,x,y;
        cin >> t >> x >> y;

        int move_len = abs(max(x, now_x)-min(x, now_x)) + abs(max(y, now_y)-min(y, now_y));
        int move_time = t - now_t;

        if(move_time < move_len || (move_time % 2) != (move_len % 2)) {
            cout << "No" << endl;
            return 0;
        } else {
            now_t = t;
            now_x = x;
            now_y = y;
        }
    }

    cout << "Yes" << endl;
    return 0;
}

/***

5
3 1 2
6 1 1
10 4 0
20 10 4
100 75 0

***/