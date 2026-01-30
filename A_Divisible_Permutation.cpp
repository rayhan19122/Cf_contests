//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n+1);
    map<int,int>mp;

    v[n]=n;
    for(int i=n-1;i>=1;i--){
        int x=v[i+1]-i;
        if(x>0){
            if(mp.find(x)==mp.end()) {v[i]=x;mp[v[i]]++;}
            else {v[i]=v[i+1]+i;mp[v[i]]++;}
        }
        else{
            v[i]=v[i+1]+i;
            mp[v[i]]++;
        }
    }
    for(int i=1;i<=n;i++) cout<<v[i]<<" ";
    cout<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
