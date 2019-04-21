#include <iostream>
using namespace std;

int transform_char_to_int(char c) {
    return (int)c - '0';
}

int transform_string_to_int(string s) {
    int ret = 0;
    for(int i=0; i <= s.size(); i++) {
        ret = (int)s[i] - '0';
    }
    return ret;
}

int main() {
    int N, A, B, ans;
    cin >> N >> A >> B;

    ans = 0;

    for(int i=0; i <= N; i++) {
        string tmp_i = to_string(i);
        int sum = 0;

        for(int j=0; j < tmp_i.size(); j++) {
            sum = sum + (int)tmp_i[j] - '0';
        }

        if(sum >= A && sum <= B) {
            ans += i;
        }
    }

    cout << ans << endl;

    return 0;
}