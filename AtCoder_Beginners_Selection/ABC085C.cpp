#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;


    for(int i=0;i<=n;i++)for(int j=0;j<=n-i;j++){
            int k=n-i-j;
            if(i*1000+j*5000+k*10000==y){
                printf("%d %d %d\n",k,j,i);
                return 0;
            }
        }
    cout << "-1 -1 -1" << endl;
    return 0;
}