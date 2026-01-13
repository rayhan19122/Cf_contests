//In the name of ALLAH
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long
#define endl '\n'

int functionZ(int y) {
    int x;
    cin>>x;
    
    while (x<=(y*y))
    {
        if((x%11==0)&&(x%y==0)){
            cout<<x;
            x++;
        }
        else if(((x%7)==0)||(x%y==1)){
            cout<<y;
            x=x+2;
        }
        cout<<endl;
    }
    cout<<"End of list"<<endl;
    return 0;

    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int y; cin >> y;
    functionZ(y);
    return 0;
}
