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
    int T;
    //r(input);
    //w(output);
    cin >> T;
    for(int i=1; i<=T; i++){
        int N;
        int A, B, T, W;
        A=B=T=W=0;
        string str;
        cin >> N >> str;
        for(int i=0; i<N; i++){
            if(str[i]=='A') A++;
            else if(str[i]=='B') B++;
            else if(str[i]=='T') T++;
            else if(str[i]=='W') W++;
        }
        if(A==N){
            pf("Case %d: ABANDONED\n", i);
        }
        else if(B==N || B+A==N){
            pf("Case %d: BANGLAWASH\n", i);
        }
        else if(W==N || W+A==N){
            pf("Case %d: WHITEWASH\n", i);
        }
        else if(B>W){
            pf("Case %d: BANGLADESH %d - %d\n", i, B, W);
        }
        else if(B<W){
            pf("Case %d: WWW %d - %d\n", i, W, B);
        }
        else {
            pf("Case %d: DRAW %d %d\n", i, B, T);
        }
    }
    return 0;
}
