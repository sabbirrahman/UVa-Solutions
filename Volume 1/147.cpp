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
#define EPS 1e-9
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define Sort(v) sort(v.begin(),v.end())
#define ms(a,d) memset(a,d,sizeof a)
#define ll long long int
#define ull unsigned long long int

ll N, dp[12][30001];
ll coin[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
ll coin_change(ll i, ll amount);

int main(){
    //r(input);
    //w(output);
    ms(dp, -1);
    ll n1, n2;
    while(sc("%lld.%lld", &n1, &n2)==2){
        if(!n1 && !n2) break;
        N = n1*100+n2;
        pf("%3lld.%.2lld%17lld\n", n1, n2, coin_change(0, N));
    }
    return 0;
}

ll coin_change(ll i, ll amount){
    if(i>=11){
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll ret1 = 0, ret2 = 0;
    ll a = amount-coin[i];
    if(a >= 0) ret1 = coin_change(i, a);
    ret2 = coin_change(i+1, amount);
    return dp[i][amount] = ret1 + ret2;
}
