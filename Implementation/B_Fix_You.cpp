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
    int n, m;
    cin >> n >> m;
    // vector<vector<char>> belt(n, vector<char>(m));

    char ch;
    int count = 0;

    loop(i, n)
    {
        loop(j, m)
        {
            cin >> ch;
            if((i == n-1 && ch == 'D') || (j == m-1 && ch == 'R'))
            {
                count++;
            }
        }
    }
    cout << count << endl;
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