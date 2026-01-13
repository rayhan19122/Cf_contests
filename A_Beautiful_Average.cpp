//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];

    vector<int>presum(n+1);
    for(int i=1;i<=n;i++){
        presum[i]=presum[i-1]+v[i];
    }

    set<int>s;

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int res = (presum[j]-presum[i-1])/(j-(i-1));
            s.insert(res);
        }
    }
    cout<<*(--s.end())<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
