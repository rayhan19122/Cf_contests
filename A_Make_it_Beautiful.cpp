//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    map<int,int>mp;
    vector<int>v(n);
    for(auto& u:v){
        cin>>u;
        mp[u]++;
    }
    sort(v.begin(),v.end());
    int got=v[n-1];
    if(mp.size()==1) cout<<"NO";
    else{
        cout<<"YES"<<endl<<got<<" ";
        for(int i=0;i<n-1;i++) cout<<v[i]<<" ";
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
