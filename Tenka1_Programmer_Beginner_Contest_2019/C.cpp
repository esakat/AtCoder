#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans = 0;

    int prev_black_sum = 0;
    int now_white_sum = 0;
    int tmp_white_sum = 0;
    bool now_white;
    if(S.at(0) == '.') {
        now_white = true;
    } else {
        now_white = false;
    }

    for(int i=0; i < S.size(); i++) {

        // 白から黒に切り替わったタイミングで計算して変数なども初期化
        if (S.at(i) == '#' && now_white) {
            // 白を黒に変える場合は
            if (prev_black_sum - tmp_white_sum > now_white_sum) {
                ans += now_white_sum;
                tmp_white_sum += now_white_sum;
                now_white_sum = 0;
                // 黒のsumは更新しない
            } else {
                // 黒を白に変える
                ans = ans - tmp_white_sum  + prev_black_sum ;
                prev_black_sum = 0;
                now_white_sum = 0;
                tmp_white_sum = 0;
            }
        }
        // 黒が続いたら、黒の合計値を加算する
        if (S.at(i) == '#') {
            prev_black_sum++;
            now_white = false;
        }

        // 白が続いたら、白の合計値を加算する
        if (S.at(i) == '.') {
            now_white_sum++;
            now_white = true;
        }
    }

    // 最後が白で終わった場合
    if (S.at(N-1) == '.') {
        // 白を黒に変える場合は
        if (prev_black_sum - tmp_white_sum > now_white_sum) {
            ans += now_white_sum;
            tmp_white_sum += now_white_sum;
            now_white_sum = 0;
            // 黒のsumは更新しない
        } else {
            // 黒を白に変える
            ans = ans - tmp_white_sum - tmp_white_sum + prev_black_sum ;
            prev_black_sum = 0;
            now_white_sum = 0;
            tmp_white_sum = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
// 9
// ....#...#
// ....#....
// ......#..
// .##.#...#
//