#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <utility>
#include <bitset>
#include <set>

using namespace std;

#define pf printf
#define sc scanf
#define pi 2*acos(0.0)
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define ms(a, b) memset(a, b, sizeof a)

typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int ULLI;

ULLI bee(ULLI n);
ULLI dp[101];

int main(){
    ULLI N;
    ios::sync_with_stdio(false);
    ms(dp, -1);
    while(cin >> N){
        if(N==-1) break;
        ULLI M = bee(N);
        ULLI T = M+dp[N-1]+1;
        cout << M << " " << T << endl;
    }
    return 0;
}

ULLI bee(ULLI n){
    if(n==0) return n;
    else if(n==1) return n;
    else if(dp[n]!=-1) return dp[n];
    else return dp[n] = bee(n-1)+bee(n-2)+1;
}
