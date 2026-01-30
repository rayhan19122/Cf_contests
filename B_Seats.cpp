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
    if(n<=2){
        cout<<1<<endl;
        return;
    }
    if(s[0]=='0' && s[1]=='0') s[1]='1';
    if(s[n-1]=='0' && s[n-2]=='0') s[n-2]='1';

    int cnt=0;
    int flag=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i-flag>=3){
                s[i]='1';
                cnt++,flag=i;
            }
        }
        else {
            cnt++;
            flag=i;
        }
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
