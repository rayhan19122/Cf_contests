//In the name of ALLAH
#include <iostream>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    if(n%3==0) cout<<0<<endl;
    else{
        int x=n/3;
        int ans=(3*(x+1))-n;
        cout<<ans<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
