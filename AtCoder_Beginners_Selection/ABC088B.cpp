#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> card(N);

    // 読み取り
    for (int i=0; i < N; i++) {
        cin >> card.at(i);
    }

    // 降順でソート
    sort(card.begin(), card.end(), greater<int>());

    int alice_sum = 0;
    int bob_sum = 0;
    for (int i=0; i < N; i++) {
        if (i % 2 == 0) {
            alice_sum += card.at(i);
        } else {
            bob_sum += card.at(i);
        }
    }

    cout << alice_sum - bob_sum << endl;

    return 0;
}