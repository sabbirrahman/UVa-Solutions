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

unsigned int GCD(unsigned int a, unsigned int b);

int main(){
    ios::sync_with_stdio(false);
    unsigned int N;
    //r(input);
    //w(output);
    while(cin >> N && N!=0){
        unsigned int G = 0;
        for(unsigned int  i=1; i<N; i++)
            for(unsigned int  j=i+1; j<=N; j++){
                G += GCD(i,j);
            }
        cout << G << endl;
    }
    return 0;
}

unsigned int GCD(unsigned int a, unsigned int b){
    if(b==0) return a;
    if(a<b) swap(a, b);
    return GCD(b, a%b);
}
