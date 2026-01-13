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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &u:v) cin>>u;
    sort(v.begin(),v.end());
    //for(auto u:v) cout<<u<<" ";
    //cout<<endl;
    int l=0,r=n-1;
    ll grp1=0;
    ll grp2=0;
    while (l<=r)
    {
        if(l==r){
            if(grp1>grp2) grp2+=v[l],l++;
            else grp1+=v[l],l++;
        }
        else if((r-l)==1){
            if(grp1>grp2) grp2+=v[r],grp1+=v[l],l++,r--;
            else grp1+=v[r],grp2+=v[l],l++,r--;
        }
        else{
            if(l%2==0){
                grp1+=(v[l]+v[r]);
                l++,r--;
            }
            else {
                grp2+=(v[l]+v[r]);
                l++,r--;
            }
        }
    }
    cout<<abs(grp1-grp2)<<endl;
    
    return 0;
}