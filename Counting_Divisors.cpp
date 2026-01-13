#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int mx=1e6+123;
int arr[mx];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    
    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j+=i) arr[j]++;
    }

    while (n--)
    {
        int x;
        cin>>x;
        cout<<arr[x]<<endl;
    }
    return 0;
}