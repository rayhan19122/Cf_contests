//In the name of ALLAH
#include <iostream>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<char>v(n+1);
    for(int i=1;i<=n;i++) v[i]='0';

    int l,r;
    l=1,r=n;
    int sz=s.size();
    for(int i=0;i<sz;i++){
        if(s[i]=='0') {
            v[l]='-';
            l++;
        }
        else if(s[i]=='1'){
            v[r]='-';
            r--;
        }else {
            v[l]='?';
            v[r]='?';
        }
    }
    for(int i=1;i<=n;i++) cout<<v[i];
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
