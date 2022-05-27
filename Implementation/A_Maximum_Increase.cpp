#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll N;
    cin >> N;
    vector<ll> arr(N);

    ll max_ending_here = 1, max_so_far = 1;

    for(ll i = 0; i < N; i++)
    {
        cin >> arr[i];
        if(i > 0)
        {
            if(arr[i] > arr[i - 1])
            {
                max_ending_here += 1;
            }
            else
            {
                max_so_far = max(max_so_far, max_ending_here);
                max_ending_here = 1;
            }
        }
    }

    max_so_far = max(max_so_far, max_ending_here);

    cout << max_so_far;

    return 0;
}