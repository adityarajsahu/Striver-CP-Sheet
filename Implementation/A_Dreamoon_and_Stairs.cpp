#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;

    ll div = n / 2, rem = n % 2;
    vector<ll> ways;
    for(int i = 0; i <= div; i++) {
        int total = i + ((div - i) * 2) + rem;
        if(total % m == 0) {
            ways.push_back(total);
        }
    }

    if(ways.size() == 0) {
        cout << -1 << endl;
    } else {
        cout << *min_element(ways.begin(), ways.end()) << endl;
    }
    return 0;
}