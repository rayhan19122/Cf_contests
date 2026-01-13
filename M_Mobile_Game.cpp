//In the name of ALLAH
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double dl;
#define endl '\n'
#define all(a) (a).begin(),(a).end()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 

const int mx=2e9+123;

ll solve(ll x){
    return (x*(x+1))/2L;
}
int main()
{
    optimize();
    ll t;
    cin>>t;

    while (t--)
    {
        ll x,y;
        cin>>x>>y;
        ll val=x+y;
        ll ans;
        ll l=0,r=mx;
        while (l<=r)
        {
            ll mid=(l+r)/2L;
            if(solve(mid)>=val){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}