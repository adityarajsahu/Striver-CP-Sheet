#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N;
    cin >> N;

    vector<ll> arr(7);
    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    ll day = 0, count = 0;
    while(true) {
        count += arr[day];
        if(count >= N) {
            cout << day + 1;
            return 0;
        }
        day = (day + 1) % 7;
    }

    return 0;
}