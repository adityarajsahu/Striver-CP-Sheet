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
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

int main()
{
    fast_cin();

    ll num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    ll mx = max(num1, max(num2, max(num3, num4)));

    if(mx - num1 != 0) {
        cout << mx - num1 << " ";
    }

    if(mx - num2 != 0) {
        cout << mx - num2 << " ";
    }

    if(mx - num3 != 0) {
        cout << mx - num3 << " ";
    }

    if(mx - num4 != 0) {
        cout << mx - num4 << " ";
    }
    cout << endl;

    return 0;
}