#include <iostream>
using namespace std;

typedef unsigned long long int ULLI;

ULLI Reverse(ULLI n);
bool palindrome(ULLI n);

int main(){
    int T, iteratoration=0;
    ULLI n;
    cin >> T;
    while(T--){
        iteratoration=0;
        cin >> n;
        while(!palindrome(n)){
            n += Reverse(n);
            iteratoration++;
        }
        cout << iteratoration << " " << n << endl;
    }
    return 0;
}

ULLI Reverse(ULLI n){
    ULLI sum=0;
    while(n>0){
        sum = sum*10+n%10;
        n /= 10;
    }
    return sum;
}

bool palindrome(ULLI n){
    if(n==Reverse(n))
        return true;
    else
        return false;
}
