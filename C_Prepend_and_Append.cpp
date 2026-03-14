//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int cnt=0;
    int i,j;
    i=0,j=n-1;
    while (i<j)
    {
        if(s[i]==s[j]) break;
        else {
            cnt++;
            i++,j--;
        }
    }
    int ans = n-(2*cnt);
    cout<<ans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
