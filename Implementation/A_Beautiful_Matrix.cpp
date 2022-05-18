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

int main()
{
    fast_cin();
    vector<vector<int>> mat(5, vector<int>(5, 0));
    int row = 0, col = 0;
    bool found = false;

    loop(i, 5)
    {
        loop(j, 5)
        {
            cin >> mat[i][j];
            if(mat[i][j] == 1)
            {
                row = i;
                col = j;
                found = true;
                break;
            }
        }
        if(found)
        {
            break;
        }
    }

    cout << abs(row - 2) + abs(col - 2);
    return 0;
}