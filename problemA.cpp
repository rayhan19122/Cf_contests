#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        int mid=(n+1)/2;
        int midValue=v[mid]+1;
        v[mid]=midValue;
        sort(v.begin()+1,v.begin()+n+1);
        for(int i=1;i<=n;i++){
            cnt++;
            if(midValue==v[i]) break;
        }
        // for(int i=1;i<=n;i++) cout<<v[i]<<" ";
        // cout<<endl;
        // cout<<cnt<<endl;
        cout<<cnt-mid+1<<endl;
}
return 0;
}