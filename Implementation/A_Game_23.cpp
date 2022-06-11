#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N, M;
    cin >> N >> M;

    if (M % N != 0) {
        cout << -1 << endl; 
        return 0;
    }

    ll div = M / N;
    ll ans = 0;

    while (div % 2 == 0){
        div /= 2;
        ans++;
    }

    while (div % 3 == 0){
        div /= 3;
        ans++;
    }
 
    cout << (div == 1 ? ans : -1) << endl;
	return 0;
}