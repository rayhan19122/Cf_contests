//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    string p,s;
    cin>>p>>s;

    int ps=p.size();
    int ss=s.size();

    if(ps>ss || ss>2*ps || p[0]!=s[0]){
        cout<<"NO"<<endl;
        return;
    }

    vector<int>pv,sv;
    int cnt=1;

    for(int i=1;i<ps;i++){
        if(p[i]!=p[i-1]){
            pv.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    pv.push_back(cnt);

    cnt=1;
    for(int i=1;i<ss;i++){
        if(s[i]!=s[i-1]){
            sv.push_back(cnt);
            cnt=1;
        }
        else cnt++;
    }
    sv.push_back(cnt);

    if(sv.size()!=pv.size()){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<pv.size();i++){
        if(pv[i]>sv[i] || 2*pv[i]<sv[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
