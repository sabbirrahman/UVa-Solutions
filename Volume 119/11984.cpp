#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int T, C, d, i=1;
    double F, res;
    cin >> T;
    while(T--){
        cin >> C >> d;
        F = ((9.0*C)/5.0)+32.0;
        res = ((5.0*(F+d))-160.0)/9.0;
        printf("Case %d: %.2lf\n", i++, res);
    }
    return 0;
}
