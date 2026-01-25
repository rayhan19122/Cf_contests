//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;

    int x=0;
    int y=0;
    int p=n;
    for(int i=0;i<n;i++){
        if(v[i]==p){
            p--;
            continue;
        }
        else{
            x=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==p){
            y=i;
            break;
        }
    }
    //cout<<x<<" "<<y<<endl;
    reverse(v.begin()+x,v.begin()+y+1);
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
