//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    string sf='0'+s;
    //cout<<sf<<endl;
    int cnt=0;
    for(int i=1;i<sf.size();i++){
        if(sf[i]!=sf[i-1]) cnt++;
    }
    if(cnt>=3) cout<<cnt-2+n<<endl;
    else if(cnt==2) cout<<cnt-1+n<<endl;
    else cout<<cnt+n<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
