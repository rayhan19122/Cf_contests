//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v1(n);
    vector<int>v2(n);
    for(auto &u:v1) cin>>u;
    for(auto &u:v2) cin>>u;
    for(int i=0;i<n;i++){
        if(v1[i]>v2[i]) swap(v1[i],v2[i]);
    }
    int mx = *max_element(v1.begin(),v1.end());
    int sum=0;
    for(auto &u:v2){
        sum+=u;
    }
    cout<<sum+mx<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
