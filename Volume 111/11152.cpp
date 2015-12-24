#include <cstdio>
#include <cmath>

#define PI 2*acos(0.0)

int main(){
    unsigned int a, b, c;
    //freopen("11152.in", "r", stdin);
    //freopen("11152.out", "w", stdout);
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        double k = (a + b + c)/2.0;
        double triangle_area = sqrt(k*(k-a)*(k-b)*(k-c));

        double outer_circle_radius = ((a*b*c)/(4*triangle_area));
        double inner_circle_radius = (triangle_area/k);
        double outer_circle_area   = PI * outer_circle_radius * outer_circle_radius;
        double inner_circle_area   = PI * inner_circle_radius * inner_circle_radius;

        double sunflower = outer_circle_area - triangle_area;
        double violets   = triangle_area - inner_circle_area;
        double roses     = inner_circle_area;

        printf("%.4lf %.4lf %.4lf\n", sunflower, violets, roses);
    }
    return 0;
}
