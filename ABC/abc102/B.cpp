#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    int min_num = 1000000000;
    int max_num = 0;
    for(int i=0; i < N; i++) {
        int tmp;
        cin >> tmp;
        min_num = min(min_num, tmp);
        max_num = max(max_num, tmp);
    }

    cout << max_num - min_num << endl;

    return 0;
}
