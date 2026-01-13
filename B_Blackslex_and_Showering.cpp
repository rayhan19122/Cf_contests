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
    //for(auto u:v) cout<<u<<" "; cout<<endl;

    int sum=0;
    for(int i=0;i<n-1;i++){sum+=abs(v[i]-v[i+1]);}

    int ans = min(sum-abs(v[0]-v[1]),sum-abs(v[n-1]-v[n-2]));
    
    for(int i=1;i<n-1;i++){
        int x = abs(v[i]-v[i+1])+abs(v[i]-v[i-1]);
        int y = abs(v[i+1]-v[i-1]);
        ans = min(ans,(sum-x+y));
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
