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
    stack<char>st;
    for(auto& u:s){
        if(!st.empty() && st.top()==u) st.pop();
        else st.push(u);
    }
    if(st.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
