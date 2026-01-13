#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool isPalindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

string decimalToBase(int decimal, int base) {
    
    string result = "";
    string digits = "012345678";

    if (decimal == 0) return "0";

    while (decimal > 0) {
        int remainder = decimal % base;
        result = digits[remainder] + result;
        decimal /= base;
    }

    return result;
}
signed main(){

    int a,n;
    cin>>a>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        string s=to_string(i);
        if(isPalindrome(s)) v.push_back(i);
    }
    int sum=0;
    for(auto u:v){
        string p;
        p=decimalToBase(u,a);
        if(isPalindrome(p)){
            sum+=u;
        }

    }
    cout<<sum<<endl;
    return 0;
}