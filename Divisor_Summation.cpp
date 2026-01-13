#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int mx = 5e5+123;
int arr[mx];

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i=1;i<=mx;i++){
        for(int j=i;j<=mx;j+=i) arr[j]+=i;
    }

    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        cout<<arr[x]-x<<endl;
    }
    
}