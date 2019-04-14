#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Num_Group
{
    int self_len;
    int prev_len;
};


int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    char prev = 'a'; // 直前の状態をほじ
    int group_size = 0;
    int max_len = 0;
    vector<Num_Group> group;


    for(int i=0; i < N; i++) {
        if (S[i] == prev) {
            group_size += 1;
        } else {
            if (S[i] == '0') {
                if (group.size() == K) {
                    // 計算処理
                    int tmp =0;
                    for (int j=0; j < K; j++) {
                        tmp += group[j].prev_len;
                        tmp += group[j].self_len;
                    }
                    max_len = max(max_len, tmp + group_size);
                    group.erase(group.begin());
                }

                Num_Group g = {0, group_size};

                group.push_back(g);
            }

            prev = S[i];
            group_size = 1;
        }

        if(S[i] == '0') {
            group[group.size() - 1].self_len += 1;
        }

    }

    // 最後が1のセットで終わった場合
    if (S[S.length() - 1] == '1') {
        // 計算処理
        int tmp =0;
        for (int j=0; j < group.size(); j++) {
            tmp += group[j].prev_len;
            tmp += group[j].self_len;
        }
        max_len = max(max_len, tmp + group_size);
    } else {
        int tmp =0;
        for (int j=0; j < group.size(); j++) {
            tmp += group[j].prev_len;
            tmp += group[j].self_len;
        }
        max_len = max(max_len, tmp);
    }


    cout << max_len << endl;

    return 0;
}