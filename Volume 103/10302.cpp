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
    ios::sync_with_stdio(false);
    int N;
    //r(input);
    //w(output);
    while(cin >> N){
        ull sum = 0;
        for(ull i=1; i<=N; i++){
            sum += i*i*i;
        }
        cout << sum << endl;
    }
    return 0;
}
