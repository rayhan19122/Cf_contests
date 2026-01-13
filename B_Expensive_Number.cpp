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
        string s;
        cin>>s;
        ll siz=s.size();
        ll lst_c=s.size();
        for(int i=siz-1;i>=0;i--){
            if(s[i]!='0'){
                lst_c=i;
                break;
            }
        }
        ll t_z=0;
        for(int i=0;i<lst_c;i++){
            if(s[i]=='0') t_z++;
        }
        ll ans=(siz-1-lst_c)+(lst_c-t_z);
        cout<<ans<<endl;
    }
    
    return 0;
}