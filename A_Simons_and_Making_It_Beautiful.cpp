//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int mx=0;
    vector<int>v(n);
    for(auto& u:v) {
        cin>>u;
        mx=max(u,mx);
    }
    for(int i=0;i<n;i++){
        if(v[i]==mx){
            swap(v[i],v[0]);
            break;
        }
    }
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
