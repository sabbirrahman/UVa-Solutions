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
#define r(input) freopen("input.txt","r",stdin)
#define w(output) freopen("output.txt","w",stdout)
#define Sort(v) sort(v.begin(),v.end())
#define ms(a,d) memset(a,d,sizeof a)
#define ll long long int
#define ull unsigned long long int

int dp[1001][101], price[1001], weight[1001];
int N, people;
int profit(int i, int w);

int main(){
    int T;
    //r(input);
    //w();
    sc("%d", &T);
    while(T--){
        sc("%d", &N);
        for(int i=0; i<N; i++){
            sc("%d %d", &price[i], &weight[i]);
        }
        int G, total = 0;
        sc("%d", &G);
        while(G--){
            ms(dp, -1);
            sc("%d",&people);
            total += profit(0, 0);
        }
        pf("%d\n", total);
    }
    return 0;
}

int profit(int i, int w){
    if(i==N) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    else{
        int profit1, profit2;
        int wg = w+weight[i];
        profit1 = (wg <= people)?(price[i] + profit(i+1, wg)):0;
        profit2 = profit(i+1, w);
        return dp[i][w] = max(profit1, profit2);
    }
}
