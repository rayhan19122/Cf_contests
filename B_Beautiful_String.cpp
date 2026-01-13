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

    int cnt_zero=0;
    for(auto u:s){
        if(u=='0') cnt_zero++;
    }

    cout<<cnt_zero<<endl;
    for(int i=0;i<n;i++){
        if(s[i]=='0') cout<<i+1<<" ";
    }
    cout<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
