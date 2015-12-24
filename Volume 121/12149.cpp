#include <iostream>
using namespace std;

typedef unsigned long int ULI;

int main(){
    ULI N;
    while(cin >> N && N!=0){
        ULI res = (N*(N+1)*((2*N)+1))/6;
        cout << res << endl;
    }
    return 0;
}
