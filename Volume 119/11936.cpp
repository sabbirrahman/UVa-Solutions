#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int N, a, b, c;
    //freopen("11936.in", "r", stdin);
    //freopen("11936.out", "w", stdout);
    cin >> N;
    while(N--){
        cin >> a >> b >> c;
        int max = (a>b) ? ((a>c)? a:c) : ((b>c)? b:c);
        if(a==0 || b==0 || c==0) { printf("Wrong!!\n"); continue; }
        if(a+b+c-max <= max)     { printf("Wrong!!\n"); continue; }
        printf("OK\n");
    }
    return 0;
}
