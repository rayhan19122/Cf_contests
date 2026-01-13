//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1);
    vector<int>b(n+1);

    for(int i=1;i<=n;i++) cin>>a[i];
    int Max=a[0];
    for(int i=1;i<=n;i++){
        b[i]=max(a[i],Max);
        Max=b[i];
    }

    int sum=0;
    for(int i=n;i>=1;i--){
        //int m=max(a[i],b[i-1]);
        cout<<b[i]+sum<<" ";
        sum+=a[i];
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
