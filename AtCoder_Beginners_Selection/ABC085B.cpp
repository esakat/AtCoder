#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> mochis(N);

    for (int i=0; i < N; i++) {
        cin >> mochis.at(i);
    }

    // ソート
    sort(mochis.begin(), mochis.end(), greater<int>());
    // ソートして隣り合う重複要素を削除、vectorの長さは変わらないので、後ろにポイント的なゴミだけ残る
    // uniqueの帰り値は後ろのゴミの始まりのポインタなので、そこから、vectorの最後までを消すと綺麗になる
    mochis.erase(unique(mochis.begin(), mochis.end()), mochis.end());

    cout << mochis.size() << endl;

    return 0;
}