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
        ll n,m,l,r;
        vector<ll>v;
        cin>>n>>m>>l>>r;
        ll mx;
        if(0+abs(l)>0+abs(r)) mx=l;
        else mx=r;
        if(m<=abs(mx)){
            v.push_back(0);
            if(l<0) v.push_back(-m);
            else v.push_back(m);
        }
        else{
            if(mx<0){
                v.push_back(l);
                v.push_back(l-m);
            }else{
                v.push_back(l);
                v.push_back(l+m);
            }
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<" "<<v[1]<<endl;
        
    }
    
    return 0;
}