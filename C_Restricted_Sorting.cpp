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

    int ans=INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            ans=min(ans,max(a[i]-b[0],b[n-1]-a[i]));
        }
    }
    ans==INT_MAX?cout<<-1<<endl:cout<<ans<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
