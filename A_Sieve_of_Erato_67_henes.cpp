//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    bool one,sixty_seven;
    one=sixty_seven=false;
    for(auto& u:v){
        cin>>u;
        if(u==67) sixty_seven=true;
    }

    if(sixty_seven==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
