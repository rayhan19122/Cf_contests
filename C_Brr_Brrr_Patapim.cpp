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
 


int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<vector<ll>> arr(n + 1, vector<ll>(n + 1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }
        ll sum=0;
        vector<ll>v(2*n+1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                v[i+j]=arr[i][j];
            }
        }
        ll l=2*n;
        ll m=(l*(l+1))/2;

        for(auto u:v)sum+=u;
        v[1]=m-sum;
        for(int i=1;i<=v.size()-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}