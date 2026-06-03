//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'


void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int mn,mx;
    mn=INT_MAX;
    mx=INT_MIN;
    for(auto &u:v){
        cin>>u;
        mn=min(mn,u);
        mx=max(mx,u);
    }
    int ans=INT_MAX;
    for(int i=mn;i<=mx;i++){
        int dif=0;
        for(int j=0;j<v.size();j++){
            dif=max(abs(i-v[j]),dif);
        }
        ans=min(ans,dif);
        // cout<<ans<<" ";
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
