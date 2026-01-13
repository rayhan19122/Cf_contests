//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(i==x) continue;
        v.push_back(i);
    }
    if(x!=n) v.push_back(x);
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
