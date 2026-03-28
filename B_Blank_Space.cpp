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
    int ans=0;
    int cnt = 0;
    for(auto& u:v){
        if(u==1){
            ans = max(cnt,ans);
            cnt=0;
        }
        else cnt++;
    }
    ans = max(ans,cnt);
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
