//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    vector<int>v(7);
    for(auto& u:v) cin>>u;
    sort(v.begin(),v.end());
    int ans=0;
    ans = v[0]+v[1]+v[2]+v[3]+v[4]+v[5];
    cout<<v[6]-ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
