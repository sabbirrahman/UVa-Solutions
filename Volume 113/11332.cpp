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

unsigned int f(unsigned int n);

int main(){
    ios::sync_with_stdio(false);
    unsigned int N;
    //r(input);
    //w(output);
    while(cin >> N && N!=0){
        cout << f(N) << endl;
    }
    return 0;
}

unsigned int f(unsigned int n){
    if(n>=0 && n<=9) return n;
    unsigned int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return f(sum);
}
