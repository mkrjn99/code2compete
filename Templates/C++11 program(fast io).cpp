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
using namespace std;
typedef pair<int,int> pi;
typedef long long ll;

template <class T> T& get(T &n) {
    static int p;
    static bool f;
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

int main() {
    static int T,N,i,j;
    get(T);
    while(T--) {

    }
    return 0;
}

