#include <iostream>
#include <cmath>
using namespace std;

typedef long long int LLI;

bool isPerfectSquare(LLI N){
    LLI root = sqrt(N);
    return (root*root) == N;
}

int main(){
    LLI N;
    while(cin >> N && N!=0){
        cout << ( isPerfectSquare(N) ? "yes" : "no" ) << endl;
    }
    return 0;
}
