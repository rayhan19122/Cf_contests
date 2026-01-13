//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int sz = s.size();
    int cnt = 0;

    for(int i=0;i<sz;i++){
        if(s[i]=='1'){
            cnt=i;
            break;
        }
    }
    int ans=0;
    int durutto = k-1;
    if(cnt==sz-1){cout<<1<<endl; return;}
    for(int i=cnt+1;i<sz;i++){
        if(s[i]=='1'){
            int dis=i-cnt;
            cnt = i;
            if(dis>durutto) ans++;
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
