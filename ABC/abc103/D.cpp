#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// intのpairの型を定義しておく
typedef pair<int, int> P;

// 昇順sort時に使う比較関数, 配列から2つのpair要素を取り出して、secondの値を比較する
bool pairCompare(const P& firstElof, const P& secondElof){
    return firstElof.second < secondElof.second;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<P> vec(M);

    int a,b;
    for(int i=0; i < M; i++) {
        cin >> a >> b;
        vec[i].first = a;
        vec[i].second = b;
    }

    // 昇順ソート
    sort(vec.begin(), vec.end(), pairCompare);

    int ans = 0;
    int tmp = 0;
    for(int i=0; i < M; i++) {
        if(tmp < vec[i].first) {
            ans++;
            tmp = vec[i].second - 1;
        }
    }

    cout << ans << endl;

    return 0;
}

