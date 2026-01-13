//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b;
    cin>>a>>b;

    if(b==1){
        if(a%2) cout<<a+b<<endl;
        else cout<<-1<<endl;
        return;
    }
    if(a==1){
        if(b%2) cout<<a+b<<endl;
        else{
            int p=b/2;
            if(p%2) cout<<-1<<endl;
            else{
                int ans=(p*a)+(b/p);
                cout<<ans<<endl;
            }
        }
        return;
    }
    if(b%2){
        int ans=(a*b)+1;
        if(ans%2==0) cout<<ans<<endl;
        else cout<<-1<<endl;
        return;
    }
    if(b%2==0){
        int p=b/2;
        int ans=(p*a)+b/p;
        cout<<ans<<endl;
        return;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
