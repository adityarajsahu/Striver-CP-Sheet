#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int num = 1e9 + 7;
	long long ans=0;

	for(int i = n; i--; ){
		a[i] = min(a[i], num - 1);
		if(a[i] < 0)
        {
            a[i] = 0;
        }

		num = a[i];
		ans += a[i];
	}
	cout << ans << endl;
}