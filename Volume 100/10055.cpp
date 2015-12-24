#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    unsigned long long a, b;
    while(scanf("%lld %lld", &a, &b)!=EOF){
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}
