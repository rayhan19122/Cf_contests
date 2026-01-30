//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b.begin(),b.end());

    // for(auto u:a) cout<<u<<" ";
    // cout<<endl;
    // for(auto u:b) cout<<u<<" ";
    // cout<<endl;


    int ans=0;
    int dif=0;
    for(int i=0;i<n;i++){
        dif = abs(a[i]-b[i]);
        ans=max(ans,dif);
    }
    if(ans==0) cout<<-1<<endl;
    else cout<<ans<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
