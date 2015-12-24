/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("11878.in");
    //w("11878.out");
    string str;
    int count = 0;
    while(cin >> str){
        string first, second, result;
        int len = str.size();
        int i;
        char ch;

        for(i=0; i<len; i++){
            if(str[i]=='+' || str[i]=='-'){
                ch = str[i];
                break;
            }
            first+=str[i];
        }
        for(++i; i<len; i++){
            if(str[i]=='=') break;
            second+=str[i];
        }
        for(++i; i<len; i++) result+=str[i];

        int a = atoi(first.c_str());
        int b = atoi(second.c_str());
        int c = atoi(result.c_str());

        if(ch == '+'){
            if(a + b == c) count++;
        } else if(ch == '-'){
            if(a - b == c) count++;
        }
    }
    cout << count << endl;
    return 0;
}
