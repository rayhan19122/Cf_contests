//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,s,x;
    cin>>n>>s>>x;
    vector<int>v(n);
    int sum=0;
    for(auto &u:v) {cin>>u;sum+=u;}

    if(sum==s){cout<<"YES"<<endl;return;}
    if(sum>s){cout<<"NO"<<endl;return;}
    if(sum<s){
        int dif=s-sum;
        if(dif%x==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
