#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());
    int count = 0;
    for(auto p : v) {
        if(p.first <= k) {
            count++;
            k -= p.first;
        } else {
            break;
        }
    }

    cout << count << endl;
    for(int i = 0; i < count; i++) {
        cout << v[i].second << " ";
    }
    return 0;
}