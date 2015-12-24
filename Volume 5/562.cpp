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

int value[101], dp[101][50001];
int N, CAP;
int divide(int i, int w);

int main(){
    int T;
    ios::sync_with_stdio(false);
    //r(input);
    //w(ouput);
    cin >> T;
    while(T--){
        cin >> N;
        int total = 0;
        for(int i=0; i<N; i++){
            cin >> value[i];
            total += value[i];
        }
        CAP = total/2;
        for(int i=0; i<=N; i++)
            for(int j=0; j<=CAP; j++)
                dp[i][j]=-1;
        cout << total-(2*divide(0,0)) << endl;
    }
    return 0;
}

int divide(int i, int w){
    if(i==N) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    else {
        int profit1, profit2;
        profit1 = (w+value[i] <= CAP)? (value[i]+divide(i+1, w+value[i])):0;
        profit2 = divide(i+1, w);
        return dp[i][w] = max(profit1, profit2);
    }
}
