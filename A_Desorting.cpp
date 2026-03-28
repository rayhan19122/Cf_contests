//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& u:v) cin>>u;
    int mn = INT_MAX;
    for(int i=0;i<n-1;i++){
        mn=min(mn,v[i+1]-v[i]);
    }
    if(mn<0) cout<<0<<endl;
    else cout<<(mn/2)+1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
