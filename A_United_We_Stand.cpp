//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& u:v) cin>>u;
    sort(v.begin(),v.end());

    int x = v[0];
    int b=1;
    for(int i=1;i<n;i++){
        if(v[i]!=x) break;
        else b++;
    }
    if(b==n){
        cout<<-1<<endl;
        return;
    }
    else cout<<b<<" "<<n-b<<endl;
    for(int i=0;i<b;i++) cout<<v[i]<<" ";
    cout<<endl;
    for(int i=b;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
