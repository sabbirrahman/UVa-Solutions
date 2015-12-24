#include <iostream>
#include <cstdio>
using namespace std;
typedef unsigned long long int ULLI;
ULLI happynumber(ULLI);

int main(){
    int T, i=0;
    ULLI N;
    cin >> T;
    while(T--){
        cin >> N;
        if(N==7)
            printf("Case #%d: %lld is a Happy number.\n", ++i, N);
        else if(happynumber(N)==1)
            printf("Case #%d: %lld is a Happy number.\n", ++i, N);
        else
            printf("Case #%d: %lld is an Unhappy number.\n", ++i, N);
    }
    return 0;
}

ULLI happynumber(ULLI N){
    ULLI sum = 0;
    if(N<=9)
        return N;
    while(N!=0){
        ULLI A = N%10;
        sum += A*A;
        N /= 10;
    }
    happynumber(sum);
}
