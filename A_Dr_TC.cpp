//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(auto u:s){
        if(u=='1') cnt++;
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        int f=cnt;
        if(s[i]=='0'){
            f++;
        }else{
            f--;
        }
        ans+=f;
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
