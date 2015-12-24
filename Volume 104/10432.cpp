#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define PI 2 * acos(0.0)

int main(){
    double r, n;
    while(scanf("%lf %lf", &r, &n)!=EOF){
        printf("%.3lf\n",((n*(r*r))/2) * sin((2*PI)/n));
    }
    return 0;
}
