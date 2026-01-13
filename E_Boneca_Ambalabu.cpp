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
    int n;
    cin>>n;
    int k=0;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k+=v[i]^v[j];
        }
        cout<<k<<" ";
        k=0;
    }
    return 0;
}