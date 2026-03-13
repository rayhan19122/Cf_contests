//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool check(int n) {
    int total=0;
    int zeros=0;
    while (n>0)
    {
        if(n%10==0) zeros++;
        total++;
        n/=10;
    }
    return (zeros==total-1) ? true:false;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>round;
    for(int i=1;i<=999999;i++){
        if(check(i)) round.push_back(i);
    }

    int t; cin >> t;
    while (t--){
        int n;
        cin>>n;
        int ans=0;

        for(auto& u:round){
            if(u>n) break;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
