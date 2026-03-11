//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int ans=1;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans*=i;
            // cout<<i<<endl;
            while (n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n!=1) ans*=n;
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
