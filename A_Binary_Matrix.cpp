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
        ll n,m;
        cin>>n>>m;
        vector<vector<int> > v(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                v[i][j]=c-'0';
            }
        }

        ll cnt_r=0;ll cnt_c=0;
        for(int i=0;i<n;i++){
            ll xor_sum=0;
            for(int j=0;j<m;j++){
                xor_sum^=v[i][j];
            }
            if(xor_sum)cnt_r++;
        }

        for(int i=0;i<m;i++){
            ll xor_sum=0;
            for(int j=0;j<n;j++){
                xor_sum^=v[j][i];
            }
            if(xor_sum)cnt_c++;
        }
        cout<<max(cnt_c,cnt_r)<<endl;
    }
    
    
    return 0;
}