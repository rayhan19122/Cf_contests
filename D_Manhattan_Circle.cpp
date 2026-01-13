//In the name of ALLAH
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,m;
        cin>>n>>m;
        char v[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
              cin>>v[i][j];
            }
        }
        long long start=0,end=0;
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
              if(v[i][j]=='#'){
                if(start==0 && end==0){
                    start=end=i;
                }
                else end=i;
              }
            }
        }
        long long start2=0,end2=0;
        long long indx=(start+end)/2;
        for(int j=1;j<=m;j++){
            if(v[indx][j]=='#'){
                //cout<<indx<<" "<<j<<endl;
                if(start2==0 && end2==0){
                    start2=end2=j;
                }
                else end2=j;
            }
        }
        //cout<<start2<<" "<<end2;
        long long indy=(start2+end2)/2;
        cout<<indx<<" "<<indy<<endl;

    }
    
    return 0;
}