//In the name of ALLAH
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef double dl;
 
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define si(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
 
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}
 
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
 
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}
 
template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}

/* ll isOk(ll mid,ll x){
    ll find=x-mid;
    ll l=1,r=x+1;
    while (l<=r)
    {
       ll m=(l+r)/2;
       if(m==find) return m;
       if(find<m) r=mid-1;
       else l=mid+1;
    }
    
} */
bool isOk(ll v){
    bool p=true;
    string s=to_string(v);
    for(auto u:s){
        if(u>='5' && u<='9'){
        }else{
            p=false;
            break;
        }
    }
    return p;
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
        ll x;
        cin>>x;

        ll l=1,r=x+1;
        ll res=0;
        //ll res1,res2;
        while (l<=r)
        {
            ll mid=(l+r)/2;
            ll rem=x-mid;
            bool m=isOk(mid);
            bool f=isOk(rem);
            cout<<m<<" "<<f<<endl;
            if(m==true && f==false){
                l=mid-1;
            }else if(m==false && f==true) r=mid+1;
            else if(m==true && f==true){
                res=1;
                break;
            }
            else {
                res=0;
                break;
            }
            cout<<mid<<" "<<rem<<endl;
        }
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
    return 0;
}