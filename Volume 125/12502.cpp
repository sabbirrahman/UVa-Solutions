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
    //r("12502.in");
    //w("12502.out");
    int T;
    cin >> T;
    while(T--){
        int x, y, z;
        cin >> x >> y >> z;
        cout << (z*((2*x)-y))/(x+y) << endl;
    }
    return 0;
}
