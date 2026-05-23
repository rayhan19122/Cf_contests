//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int sum=0;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=1;i<=n;i++) a.push_back(i);
    for(int i=n+1;i<=3*n;i+=2) b.push_back(i);
    for(int i=n+2;i<=3*n;i+=2) c.push_back(i);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" ";
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
