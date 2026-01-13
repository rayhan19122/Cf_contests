//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;

    sort(v.begin(),v.end());
    int sz=0;
    sz=unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
