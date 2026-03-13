//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b) {
        cout<<"Yes"<<endl;
        return;
    }
    int x = n-(a+b);
    //cout<<x<<endl;
    if(x>=2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
