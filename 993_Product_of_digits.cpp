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
        vector<ll>v;
        if(n==1) cout<<1;
        else{
            for(int i=9;i>=2;i--){
                while (n%i==0)
                {
                    v.push_back(i);
                    n/=i;
                }
            }
            if(n>1) cout<<-1;
            else{
                //sort(v.begin(),v.end());
                for(auto u:v) cout<<u;
            }
        }
        cout<<endl;
    }
    return 0;
}