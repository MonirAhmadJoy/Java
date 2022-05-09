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
    int a[10]= {33,4,5,67,1,3};
    int n=6;
    sort(a,a+n);
    priority_queue<int,vector<int>,greater<int> >pq;
    for(int i=0; i<n; i++)
        pq.push(a[i]);
    int sum;
    while(!pq.empty())
    {
        sum=0;
        sum+=pq.top();
        pq.pop();
        if(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        pq.push(sum);
        cout<<sum<<endl;
        if(pq.size()==1)
            break;
    }
    cout<<pq.top()<<endl;
    return 0;
}

