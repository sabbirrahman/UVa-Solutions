/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define ms(a,d) memset(a,d,sizeof a)

#define MAX 1000000

int dp[MAX+7];
int f91(int N);

int main(){
    ios::sync_with_stdio(false);
    //r("10696.in");
    //w("10696.out");
    int N;
    ms(dp, -1);
    while(cin >> N && N!=0){
        cout << "f91(" << N << ") = " << f91(N) << endl;
    }
    return 0;
}

int f91(int N){
    if(N<=0) return 0;
    if(dp[N]!=-1) return dp[N];
    if(N<=100) return dp[N] = f91(f91(N+11));
    if(N>=101) return dp[N] = N - 10;
}
