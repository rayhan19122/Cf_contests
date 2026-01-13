#include<bits/stdc++.h>
//Jubaer_421//

using namespace std;


#define fast ios::sync_with_stdio(0);cin.tie(0);


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define fraction() cout.unsetf(ios::floatfield);cout.precision(2);cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;

typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define si(x) (int)x.size()



const ll maxn=20005;





int main()
{
    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
    {

        ll a,b;
        cin>>a>>b;
        ll indi[b];
        ll ar1[maxn],ar2[maxn],ar3[maxn];
        for(ll j=0;j<a;j++)
        {

            cin>>ar1[j]>>ar2[j];
        }

        for(ll j=0;j<b;j++)
        {
            cin>>ar3[j];




        }
cout<<"Case "<<i+1<<':'<<endl;
        for(ll j=0;j<b;j++)
        {
            for(ll k=0;k<a;k++)
            {
               if(ar1[k]<= ar3[j] && ar2[k]>=ar3[j])
            {
                indi[j]++;
            }

            }
            cout<<indi[j]<<endl;

        }



    }
}

