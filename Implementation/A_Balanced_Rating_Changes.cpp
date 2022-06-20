#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int check = 0;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if(num % 2 == 0) {
            num /= 2;
        } else {
            if(check & 1) {
                num += 1;
                check ^= 1;
            } else {
                num -= 1;
                check ^= 1;
            }
            num /= 2;
        }
        cout << num << endl; 
    }

    return 0;
}