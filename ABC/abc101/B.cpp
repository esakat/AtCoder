#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int num = atoi(n.c_str());
    int sum = 0;

    for(int i=0; i < n.size(); i++) {
        sum += n.at(i) - '0';
    }

    if(num % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
