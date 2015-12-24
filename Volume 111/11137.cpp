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

ll coin[] = {1, 8, 27, 64, 125, 216, 343, 512, 729, 1000, 1331, 1728, 2197, 2744, 3375, 4096, 4913, 5832, 6859, 8000, 9261};
ll dp[22][10001];
ll coin_change(int i, int n);

int main(){
    ios::sync_with_stdio(false);
    int N;
    //r(input);
    //w(output);
    ms(dp, -1);
    while(cin >> N){
        cout << coin_change(0, N) << endl;
    }
    return 0;
}

ll coin_change(int i, int n){
    if(i>=21){
        if(n==0) return 1;
        else return 0;
    }
    if(dp[i][n]!=-1) return dp[i][n];
    ll ret1=0, ret2=0;
    if((n-coin[i])>=0)
        ret1 = coin_change(i, n-coin[i]);
    ret2 = coin_change(i+1, n);
    return dp[i][n] = ret1 + ret2;
}
