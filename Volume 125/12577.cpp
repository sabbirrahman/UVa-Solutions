#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    string str;
    int cases=1;
    while(cin >> str && str!="*"){
        if(str=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n", cases);
        else
            printf("Case %d: Hajj-e-Asghar\n", cases);
        cases++;
    }
    return 0;
}
