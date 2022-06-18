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
    string input1, input2;
    cin >> input1 >> input2;

    if(input1.length() > input2.length()) {
        cout << "NO" << endl;
        return;
    }

    map<char, int> m1;
    for(int i = 0; i < input1.length(); i++) {
        m1[input1[i]]++;
    }

    for(int i = 0; i <= input2.length() - input1.length(); i++) {
        map<char, int> m2;
        for(int j = i; j < i + input1.length(); j++) {
            m2[input2[j]]++;
        }

        if(m1 == m2) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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