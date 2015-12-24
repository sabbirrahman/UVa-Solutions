#include <cstdio>
#include <cmath>

int main(){
    //freopen("10347.in", "r", stdin);
    //freopen("10347.out", "w", stdout);
    double u, v, w;
    while(scanf("%lf %lf %lf", &u, &v, &w)!=EOF){
        double max = (u>v) ? ((u>w)?u:w) : ((v>w)?v:w);
        if(u==0 || v==0 || w==0) { printf("-1.000\n"); continue; }
        if(u+v+w-max <= max)     { printf("-1.000\n"); continue; }
        double u2 = u*u;
        double v2 = v*v;
        double w2 = w*w;
        double u4 = u*u*u*u;
        double v4 = v*v*v*v;
        double w4 = w*w*w*w;
        double x = (u2*v2)+(v2*w2)+(w2*u2);
        double y = u4+v4+w4;
        double area = (1.0/3.0) * sqrt((2*x)-y);
        printf("%.3lf\n", area);
    }
    return 0;
}
