//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,q;
    cin>>n>>q;

    vector<int>a(n+1);
    vector<int>b(n+1);

    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];

    for(int i=1;i<=n;i++){
        if(b[i]>a[i]) a[i]=b[i];
    }
    for(int i=n-1;i>0;i--){
        if(a[i+1]>a[i]) a[i]=a[i+1];
    }
    // int mx;
    // mx=*max_element(a.begin()+1,a.end());
    // cout<<mx<<endl;
    vector<int>preSum(n+1);
    for(int i=1;i<=n;i++){
        preSum[i]=preSum[i-1]+a[i];
    }
    int l,r;
    while (q--)
    {
        cin>>l>>r;
        int ans=preSum[r]-preSum[l-1];
        cout<<ans<<" ";
    }
    cout<<endl;
    //for(auto u:preSum) cout<<u<<" ";

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
