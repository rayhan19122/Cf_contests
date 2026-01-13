//In the name of ALLAH
#include <iostream>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=c-a;
    f=d-b;
    int cnt=0;
    int m1=min(a,b);
    int n1=max(a,b);
    int m2=min(e,f);
    int n2=max(e,f);
    
    if((m1+1)*2>=n1) cnt++;
    if((m2+1)*2>=n2) cnt++;

    if(cnt==2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
