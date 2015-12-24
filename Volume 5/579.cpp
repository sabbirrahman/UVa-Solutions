#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    //r("579.in");
    //w("579.out");
    int H, M;
    char ch;
    while(scanf("%d %c %d", &H, &ch, &M)!=EOF){
        if(!H && !M) break;
        double angel = ((H*30)+(M/2.0))-(M*6);
        if(angel<0) angel *= -1;
        if(angel>180.0) angel = 360.0-angel;
        printf("%.3f\n", angel);
    }
    return 0;
}
