#include <bits/stdc++.h>
#define gcd         __gcd
#define bitcount    __builtin_popcountll
#define getcx       getchar_unlocked
#define putcx       putchar_unlocked
#define rep(i,j,n)  for(i=j;i<n;i++)
#define tr(it,c)    for(auto it=(c).begin();it!=(c).end();it++)
#define pb          push_back
#define mp          make_pair
#define hell        1000000007
#define uset        unordered_set
#define umap        unordered_map
#define ft          first
#define sc          second
using namespace std;
typedef pair<int,int> pi;
typedef long long ll;

template <class T> T& get(T &n) {
    int p;
    bool f;
    f=false;
    n = 0;
    do {
        p=getcx();
    } while( !isdigit(p) && p!='-');
    if(p=='-') {
        f=true;
        p=getcx();
    }
    while ( isdigit(p) ) {
        n = (n << 3) + (n << 1) + (p - '0');
        p = getcx();
    }
    n = (f ? -n : n);
    return n;
}

#ifdef TRACE
template<class T> ostream& printContainer(ostream &o,const T &c){
    tr(it,c){
        o<<*it<<' ';
    }
    return o;
}

template<class T> ostream& operator<<(ostream &o,const vector<T> &c){return printContainer(o,c);}
template<class T> ostream& operator<<(ostream &o,const deque<T> &c){return printContainer(o,c);}
template<class T> ostream& operator<<(ostream &o,const list<T> &c){return printContainer(o,c);}
template<class T> ostream& operator<<(ostream &o,const set<T> &c){return printContainer(o,c);}
template<class T> ostream& operator<<(ostream &o,const uset<T> &c){return printContainer(o,c);}
template<class T> ostream& operator<<(ostream &o,const multiset<T> &c){return printContainer(o,c);}
template<class T,class V> ostream& operator<<(ostream &o,const map<T,V> &c){return printContainer(o,c);}
template<class T,class V> ostream& operator<<(ostream &o,const umap<T,V> &c){return printContainer(o,c);}
template<class T,class V> ostream& operator<<(ostream &o,const pair<T,V> &c){return (o<<"("<<c.ft<<","<<c.sc<<")");}

#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
#else
#define trace(x)
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)
#endif

int main() {
    int T,N,i,j;
    get(T);
    while(T--) {

    }
    return 0;
}

