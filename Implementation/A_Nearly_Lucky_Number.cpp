#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, count = 0;
    cin >> N;

    while(N > 0)
    {
        if(N % 10 == 4 || N % 10 == 7)
        {
            count++;
        }
        N /= 10;
    }

    if(count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}