#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
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

typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int ULLI;

int main(){
    int a, b, c, d;
    //r();
    //w();
    while(sc("%d %d %d %d", &a, &b, &c, &d)){
        if(a==0 && b==0 && c==0 && d==0) break;
        int n1 = (40+(a-b))%40==0?40:(40+(a-b))%40;
        int n2 = (40+(c-b))%40==0?40:(40+(c-b))%40;
        int n3 = (40+(c-d))%40==0?40:(40+(c-d))%40;
        printf("%d\n", (1080+((n1+n2+n3)*9)));
    }
    return 0;
}
