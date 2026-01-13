#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int arr[mx];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            if(sum!=0){
                sum+=arr[i];
            }
            else {
                cnt++;
            }
        }else{
            sum+=arr[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}