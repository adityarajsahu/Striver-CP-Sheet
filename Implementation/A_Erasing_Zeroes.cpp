#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<double,double> pd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<pl> vpl;
typedef vector<pi> vpi;
ll MOD = 998244353;
double eps = 1e-12;
#define loop(i, k) for(int i=0 ; i<k ; i++)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
    string input;
    cin >> input;

    int len = input.length();
    int total = 0, idx;

    for(int i = 0; i < len; i++)
    {
        if(input[i] == '1')
        {
            idx = i;
            break;
        }
    }

    for(int i = idx + 1; i < len; i++)
    {
        if(input[i] == '1')
        {
            total += ( i - idx - 1);
            idx = i;
        }
    }

    cout << total << endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it = 1; it <= t; it++) {
        solve();
    }
    return 0;
}