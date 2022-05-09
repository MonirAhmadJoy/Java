#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

#define PB push_back
#define F first
#define S second
#define endl '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define MOD 1000000007

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

/**
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
*/
int dx[]= {+1,-1,0,0,+1,+1,-1,-1};
int dy[]= {0,0,+1,-1,+1,-1,+1,-1};
///____________________________________________________________________________________________________________________///


int main()
{
    optimize();
    vector<vector<double>>v= {{5,-1,2,7},
        {-2,6,9,0},
        {-7,5,-3,5}
    };

    int row=v.size();
    int col=v[0].size();
    for(int i=1; i<row; i++)
    {
        for(int j=0; j<i; j++)
        {
            double mul=(v[i][j]/v[j][j]);
            for(int k=0; k<col; k++)
                v[i][k]-=(mul*(v[j][k]));
        }
    }


    for(int i=0; i<row; i++)
    {
        for(auto u:v[i])
            cout<<u<<" ";
        cout<<endl;
    }

    double x[col+3];
    memset(x,0,sizeof(x));
    int c=col-1;
    int sum;

    for(int i=row-1; i>=0; i--)
    {
        c--;
        double sum=0;
        for(int j=0; j<col; j++)
        {
            if(j==c)
                continue;
            sum+=(x[j]*v[i][j]);

        }
        x[c]=(v[i][col-1]-sum)/v[i][c];
    }

    for(int i=0; i<col-1; i++)
        cout<<x[i]<<endl;
    return 0;
}






