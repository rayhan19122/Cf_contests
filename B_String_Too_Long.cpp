#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
string s="";
void make(char c,int t){
    for(int i=0;i<t;i++){
        s+=c;
    }
}
signed main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<pair<char,int> >v;
    int cnt=0;
    for(int i=0;i<n;i++){
        char c;
        int x;
        cin>>c>>x;
        cnt+=x;
        if(cnt>100){
            cout<<"Too Long"<<endl;
            return 0;
        }
        v.push_back({c,x});
    }
    if(cnt>100) cout<<"Too Long"<<endl;
    else{
        for(auto u:v){
            make(u.first,u.second);
        }
        cout<<s<<endl;
    }
    return 0;
}