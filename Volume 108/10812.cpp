/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("10812.in");
    //w("10812.out");
    int T;
    cin >> T;
    while(T--){
        int s, d;
        cin >> s >> d;
        int a = (s+d)/2;
        int b = (abs(s-d))/2;
        if(((a+b)==s) && (abs(a-b)==d)){
            cout << a << " " << b << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
