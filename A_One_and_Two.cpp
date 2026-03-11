//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int k=-1;
    vector<int>v(n);
    int cnt=0;
    for(auto& u:v){cin>>u;if(u==2)cnt++;}
    int curr=0;
    int half = cnt/2;
    for(int i=0;i<n;i++){
        if(v[i]==2) curr++;
        if(curr==half){
            k=i+1;
            break;
        }
    }
    if(cnt&1) cout<<-1<<endl;
    else cout<<k<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
