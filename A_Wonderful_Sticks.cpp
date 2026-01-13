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
    int x1,y1;
    x1=1,y1=n;
    map<int,int>mp;
    vector<int>v(n+1);
    for(int i=n-2;i>=0;i--){
        if(s[i]=='<'){
            v[i+2]=x1;
            mp[x1]++;
            x1++;
        }else{
            v[i+2]=y1;
            mp[y1]++;
            y1--;
        }
    }
    //for(auto u:v) cout<<u<<" ";
    int need=0;
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            need=i;
            break;
        }
    }
    v[1]=need;
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
