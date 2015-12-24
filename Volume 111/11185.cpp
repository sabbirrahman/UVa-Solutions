#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string decimalToTernary(int N){
    if(N==0) return "0";
    string ternary = "";
    while(N>0){
        ternary.insert(ternary.begin(), ((N%3) + '0'));
        N /= 3;
    }
    return ternary;
}

int main(){
    //freopen("11185.in", "r", stdin);
    //freopen("11185.out", "w", stdout);
    int N;
    while(cin >> N && N>=0){
        cout << decimalToTernary(N) << endl;
    }
    return 0;
}
