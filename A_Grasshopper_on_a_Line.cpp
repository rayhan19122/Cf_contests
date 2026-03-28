//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int x,k;
    cin>>x>>k;
    if(x%k){
        cout<<1<<endl<<x<<endl;
    }
    else {
        cout<<2<<endl<<1<<" "<<x-1<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
