#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        int num = a[i];
        bool check = false;

        for(int j = max(0, i - x); j < i; j++) {
            if(a[j] <= num) {
                check = true;
                break;
            }
        }

        if(check) {
            continue;
        }

        for(int j = min(i + 1, n); j <= min(n - 1, i + y); j++) {
            if(a[j] <= num) {
                check = true;
                break;
            }
        }

        if(!check) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}