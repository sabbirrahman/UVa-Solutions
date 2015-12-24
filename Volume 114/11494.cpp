/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("11494.in");
    //w("11494.out");
    int X1, Y1, X2, Y2;
    while(cin >> X1 >> Y1 >> X2 >> Y2){
        if(!X1 && !Y1 && !X2 && !Y2) break;
        if(X1 == X2 && Y1 == Y2){
            cout << (0) << endl;
        } else if(X1 == X2 || Y1 == Y2){
            cout << (1) << endl;
        } else if((((X1-X2)*(X1-X2))-((Y1-Y2)*(Y1-Y2))) == 0){
            cout << (1) << endl;
        } else {
            cout << (2) << endl;
        }
    }
    return 0;
}
