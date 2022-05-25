#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll k, n, w;
    cin >> k >> n >> w;

    ll sum = 0;
    for(ll i = 1; i <= w; i++) {
        sum += (i * k);
    }

    if(sum > n) {
        cout << (sum - n) << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}