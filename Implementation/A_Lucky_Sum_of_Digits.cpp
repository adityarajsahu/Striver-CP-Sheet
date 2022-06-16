#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < 7; i++) {
        int num = n - (4 * i);
        if(num >= 0 && num % 7 == 0) {
            for(int j = 0; j < i; j++) {
                cout << "4";
            }

            for(int j = 0; j < num / 7; j++) {
                cout << "7";
            }
            return 0;        
        }
    }

    cout << "-1" << endl;
    
    return 0;
}
