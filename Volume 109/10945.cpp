/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define Reverse(v) reverse(v.begin(), v.end())

int main(){
    ios::sync_with_stdio(false);
    //r("10945.in");
    //w("10945.out");
    string str;
    while(getline(cin, str)){
        if(str == "DONE") break;
        int len = str.size();
        string newStr;
        for(int i=0; i<len; i++){
            if(str[i]>='A' && str[i]<='Z'){
                newStr += tolower(str[i]);
            } else if(str[i]>='a' && str[i]<='z'){
                newStr += str[i];
            }
        }
        string rNewStr = newStr;
        Reverse(rNewStr);
        if(newStr == rNewStr){
            cout << "You won't be eaten!" << endl;
        } else {
            cout << "Uh oh.." << endl;
        }
    }
    return 0;
}
