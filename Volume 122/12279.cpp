#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>
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
    unsigned int N, i=0;
    while(cin >> N && N!=0){
        unsigned int n, a=0, b=0;
        for(int i=0; i<N; i++){
            sc("%d", &n);
            if(n==0) a++;
            else b++;
        }
        pf("Case %d: %d\n", ++i, b-a);
    }
    return 0;
}
