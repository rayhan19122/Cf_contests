#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){

    int n,l,r;
    cin>>n>>l>>r;
    int cnt=0;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        if(x<=l && y>=r) cnt++;
    }
    cout<<cnt<<endl;
    
}

