#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll N, k;
    cin >> N >> k;

    while(k > 0)
    {
        if(N % 10 != 0)
        {
            N--;
        }
        else
        {
            N /= 10;
        }
        k--;
    }

    cout << N << endl;

    return 0;
}