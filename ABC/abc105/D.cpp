#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<long long> A(N);
    for(int i=0; i < N; i++) cin >> A[i];

    map<long long, long long> nums;
    long long sum = 0;
    nums[sum]++;

    for(int i=0; i < N; i++) {
        sum += A[i];
        nums[sum % M]++;
    }

    long long ans = 0;
    for(map<long long, long long>::iterator it=nums.begin(); it != nums.end(); it++) {
        ans += it->second * (it->second - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}

