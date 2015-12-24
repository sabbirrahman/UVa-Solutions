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
    //r("10222.in");
    //w("10222.out");
    string chars = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    int len2 = chars.size();
    string input;

    while(getline(cin, input)){
        int len1 = input.size();

        for(int i=0; i<len1; i++){
            if(input[i] == ' ') { cout <<  " "; continue; }
            input[i] = tolower(input[i]);
            for(int j=0; j<len2; j++){
                if(input[i] == chars[j]){
                    cout << chars[j-2];
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
