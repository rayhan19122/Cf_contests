//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string s;
    string ans="";
    cin>>s;
    map<char,int>mp;
    for(auto u:s) mp[u]++;
    for(int i=0;i<10;i++){
        int cnt=9-i;
        for(int j=cnt;j<10;j++){
            if(mp[j+'0']>0){
                ans+=j+'0';
                mp[j+'0']--;
                break;
            }
        }
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
