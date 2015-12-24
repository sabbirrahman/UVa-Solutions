#include <iostream>
using namespace std;

typedef long long int LLI;

int main(){
    LLI N;
    while(cin >> N){
        if(N<0) break;
        cout << (1+(N*(N+1)/2)) << endl;
    }
    return 0;
}
