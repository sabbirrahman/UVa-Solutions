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

int main(){
    ull N;
    //r(input);
    //w(output);
    pf("PERFECTION OUTPUT\n", N);
    while(sc("%lld", &N) && N!=0){
        int sum = 0;
        for(ull i=1; i<=N/2; i++){
            if(N%i==0){
                sum += i;
            }
        }
        if(sum==N){
            pf("%5lld  PERFECT\n", N);
        }
        else if(sum<N){
            pf("%5lld  DEFICIENT\n", N);
        }
        else {
            pf("%5lld  ABUNDANT\n", N);
        }
    }
    pf("END OF OUTPUT\n", N);
    return 0;
}
