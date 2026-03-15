//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int ans=0;
    vector<int>v(n);
    for(auto& u:v){
        cin>>u;
        ans^=u;
    }
    if(n&1) cout<<ans<<endl;
    else{
        if(ans==0) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
