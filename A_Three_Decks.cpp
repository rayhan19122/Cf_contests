//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int sum=(a+b+c);
    int req=sum/3;
    if(sum%3) cout<<"NO"<<endl;
    else {
        if(req>c) cout<<"NO"<<endl;
        else if(a>req || b>req) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
