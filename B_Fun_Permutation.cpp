//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int last=3;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        last=max(v[i],last);
    }
    //sort(v.begin(),v.end());

    //int last=v[n-1];

    for(auto u:v){
        if(u==last) cout<<u<<" ";
        else cout<<last-u<<" ";
    }
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
