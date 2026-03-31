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
    vector<int>ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]>=v[i-1]) ans.push_back(v[i]);
        else {
            ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
