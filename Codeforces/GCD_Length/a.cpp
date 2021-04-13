#include "bits/stdc++.h"
using namespace std;
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll	
typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;
typedef vector<long long> vll;
typedef unsigned long long ull;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii;
typedef pair<pair<int, int>, int> ppi;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<int, bool> mib;
typedef map<int, string> mis;
typedef map<string, int> msi;
typedef map<int, char> mic;
typedef set<int> si;
typedef set<char> sc;
typedef set<string> ss;
typedef stack<int> sti;
typedef stack<string> sts;
typedef stack<char> stc;


/// Extra Start 
#define nn                    '\n' 
#define SS                    stringstream 
#define ull                   unsigned long long 
#define mod                   1000000007 
#define SIZE                  2000001 
#define space                 " " 
#define StringToInt           if ( ! (istringstream(s) >> n) ) n = 0; 
/// Extra End 
 
 
/// Functions Start 
 template < class T > T Multiply( T a, T b ){return a * b ;} 
template < class T > T larger( T a, T b ){return ( a > b ? a : b );} 
template < class T > T smaller( T a, T b ){return ( a < b ? a : b );} 
template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);} 
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);} 
template < class T > string converter( T n ){SS x;x << n;return x.str();}  
/// Functions End 
 
 
/// Debug Start 
template<class T1> void deb(T1 e1) 
{ 
    cout << e1 << endl; 
} 
template<class T1,class T2> void deb(T1 e1, T2 e2) 
{ 
    cout << e1 << space << e2 << endl; 
} 
template<class T1,class T2,class T3> void deb(T1 e1, T2 e2, T3 e3) 
{ 
    cout << e1 << space << e2 << space << e3 << endl; 
} 
template<class T1,class T2,class T3,class T4> void deb(T1 e1, T2 e2, T3 e3, T4 e4) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << endl; 
} 
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1, T2 e2, T3 e3, T4 e4, T5 e5) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << endl; 
} 
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1, T2 e2, T3 e3, T4 e4 ,T5 e5, T6 e6) 
{ 
    cout << e1 << space << e2 << space << e3 << space << e4 << space << e5 << space << e6 << endl; 
} 
/// Debug End 

template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
void setIO(string s) {
  freopen((s + ".in").c_str(), "r", stdin);
  freopen((s + ".out").c_str(), "w", stdout);
}

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    string u(a, '0'),  v(b, '0');

    for(int i = 0; i < max(0, a - (c - 1)); i++){
        u[i] = '7';
    }

    for(int i = 0; i < max(0, b - (c - 1)); i++){
        v[i] = (char)((i + 1) + '0');
    }
    if(a - c == 4 && b - c == 2){
        u[(a - c )] = '1';
    }
    deb(u, v);
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    // setIO();
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
// 17