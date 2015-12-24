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

int N;
int coin[]={50, 25, 10, 5, 1};
int dp[6][7490];
int coin_change(int i, int amount);

int main(){
    ms(dp, -1);
    while(sc("%d", &N)!=EOF){
        pf("%d\n", coin_change(0, N));
    }
    return 0;
}

int coin_change(int i,int amount){
    if(i>=5){
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount] != -1) return dp[i][amount];
    int ret1=0, ret2=0;
    int a = amount-coin[i];
    if(a >= 0) ret1 = coin_change(i, a);
    ret2 = coin_change(i+1, amount);
    return dp[i][amount] = ret1+ret2;
}
