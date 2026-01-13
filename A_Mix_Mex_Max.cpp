//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    map<int,int>cnt;
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        cnt[v[i]]++;
    }
    if(cnt.size()>2) cout<<"NO"<<endl;
    else if(cnt.size()==1 && cnt[0]==0) cout<<"YES"<<endl;
    else {
        if(cnt[-1]!=0 && cnt[0]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
