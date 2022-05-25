#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N, capacity = 0, exit = -1, enter = -1, max_capacity = -1;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> exit >> enter;
        capacity = capacity - exit + enter;

        if(capacity > max_capacity) {
            max_capacity = capacity;
        }
    }

    cout << max_capacity << endl;

    return 0;
}