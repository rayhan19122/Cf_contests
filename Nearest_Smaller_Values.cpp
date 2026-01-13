//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    stack<pair<int,int> >stk;
    vector<int>v(n);

    for(auto &u:v) cin>>u;

    for(int i=0;i<n;i++){
        while(stk.size()>0 && stk.top().first>=v[i]){
            stk.pop();
        }
        if(stk.size()>0){
            cout<<stk.top().second<<" ";
        }
        else cout<<0<<" ";
        stk.push({v[i],i+1});
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t;
    // while (t--)
    solve();
    return 0;
}
