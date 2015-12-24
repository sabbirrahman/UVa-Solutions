#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double n, p;

    while(scanf("%lf %lf", &n, &p)!=EOF){
        double k = exp(log(p)/n);
        printf("%.0lf\n", k);
    }

    return 0;
}
