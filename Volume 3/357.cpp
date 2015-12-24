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

ll N, dp[6][30001];
ll coin[] = {1, 5, 10 ,25, 50};
ll coin_change(ll i, ll amount);

int main(){
    //r(input);
    //w(output);
    ms(dp, -1);
    while(sc("%lld", &N)!=EOF){
        coin_change(0, 8300);
        ll ans = coin_change(0, N);
        if(ans==1){
            pf("There is only 1 way to produce %lld cents change.\n", N);
        }
        else{
            pf("There are %lld ways to produce %lld cents change.\n", ans, N);
        }
    }
    return 0;
}

ll coin_change(ll i, ll amount){
    if(i>=5){
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
