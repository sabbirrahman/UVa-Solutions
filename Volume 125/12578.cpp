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
#define pi acos(-1)
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
    sc("%d", &T);
    while(T--){
        int L;
        sc("%d", &L);
        double W = (double)(L*60)/100.00;
        double R = (double)(L*20)/100.00;
        double sarea = (double)(L*W);
        double carea = (double)(pi * R * R);
        pf("%.2lf %.2lf\n", carea, sarea-carea);
    }
    return 0;
}
