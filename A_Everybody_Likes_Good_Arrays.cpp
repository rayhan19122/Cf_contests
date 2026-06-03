//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool checkOdd(int x){
    return x&1;
}
void solve() {
    int n;
    cin>>n; 
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    int cnt=0;
    for(int i=1;i<n;i++){
        if(checkOdd(v[i])==checkOdd(v[i-1])) cnt++;
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
