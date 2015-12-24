#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int T, i = 0;
    long long int A, B, C;
    cin >> T;
    while(T--){
        cin >> A >> B >> C;
        if((A+B)>C && (A+C)>B && (B+C)>A){
            if(A==B && A==C)
                printf("Case %d: Equilateral\n", ++i);
            else if(A==B||A==C||B==C)
                printf("Case %d: Isosceles\n", ++i);
            else
                printf("Case %d: Scalene\n", ++i);
        }
        else
            printf("Case %d: Invalid\n", ++i);
    }
    return 0;
}
