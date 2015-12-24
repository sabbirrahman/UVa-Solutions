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

ull dp[51];
ull fibonacci(ull n);

int main(){
    ios::sync_with_stdio(false);
    ull N;
    //r(input);
    //w(output);
    while(cin >> N && N!=0){
        cout << fibonacci(N) << endl;
    }
    return 0;
}

ull fibonacci(ull n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(dp[n]!=0) return dp[n];
    return dp[n] = fibonacci(n-1)+fibonacci(n-2);
}
