/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("621.in");
    //w("621.out");
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int len = str.size();
        if(str == "1" || str == "4" || str == "78"){
            cout << "+" << endl;
        } else if(str.substr(len-2, len-1) == "35"){
            cout << "-" << endl;
        } else if(str.substr(0, 1) == "9" && str.substr(len-1, len-1) == "4"){
            cout << "*" << endl;
        } else if(str.substr(0, 3) == "190") {
            cout << "?" << endl;
        }
    }
    return 0;
}
