#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long int ULLI;

int main(){
    int T;
    ULLI A, B, count;
    while(cin >> A >> B){
        count = 0;
        if(A==0&&B==0) break;
        for(ULLI i=A; i<=B; i++){
            ULLI Root = sqrt(i);
            if(Root * Root == i)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
