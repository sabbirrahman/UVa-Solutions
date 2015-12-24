#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<string>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<list>
#include<set>
#include<map>

using namespace std;

#define pf printf
#define sc scanf
#define pi 2*acos(0.0)
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define Sort(v) sort(v.begin(),v.end())
#define ms(a,d) memset(a,d,sizeof a)
#define ll long long int
#define ull unsigned long long int

ll M;
ll bigmod(ll b, ll p);

int main(){
    ios::sync_with_stdio(false);
    ll B, P;
    //r(input);
    //w(output);
    while(cin >> B >> P >> M){
        cout << bigmod(B, P) << endl;
    }
    return 0;
}

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    if(p&1){
        return ((b%M)*(bigmod(b,p-1)))%M;
    }
    else{
        ll c = bigmod(b, p/2);
        return ((c%M)*(c%M))%M;
    }
}
