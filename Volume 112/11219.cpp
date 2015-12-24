#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int T, CD, CM, CY;
    int I=0, BD, BM, BY, AGE;
    char ch;
    cin >> T;
    while(T--){
        getchar();
        cin >> CD >> ch >> CM >> ch >> CY;
        cin >> BD >> ch >> BM >> ch >> BY;
        if(BY>CY) AGE = CY - BY;
        else if(BY==CY && BM>CM) AGE = CY - BY - 1;
        else if(BY==CY && BM==CM && BD>CD) AGE = CY - BY - 1;
        else if(BY<CY && BM>CM) AGE = CY - BY - 1;
        else if(BY<CY && BM==CM && BD>CD) AGE = CY - BY - 1;
        else AGE = CY - BY;

        if(AGE>130) printf("Case #%d: Check birth date\n", ++I);
        else if(AGE<0) printf("Case #%d: Invalid birth date\n", ++I);
        else printf("Case #%d: %d\n", ++I, AGE);
    }
    return 0;
}
