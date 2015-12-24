/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define Reverse(v) reverse(v.begin(), v.end())

int main(){
    ios::sync_with_stdio(false);
    //r("401.in");
    //w("401.out");
    string str;
    string revchars = "A###3##HIL#JM#O###2TUVWXY51SE#Z##8#";
    while(cin >> str){
        string output, rstr = str;
        Reverse(rstr);
        int len = str.size();
        if(str == rstr){
            bool mirror = true;
            for(int i=0; i<len; i++){
                if((str[i]>='A' && str[i]<='Z') && (str[i] != revchars[str[i]-'A'])) {
                    mirror = false;
                    break;
                } else if((str[i]>='1' && str[i]<='9') && (str[i] != revchars[str[i]-23])){
                    mirror = false;
                    break;
                }
            }
            output = (mirror)?  str + " -- is a mirrored palindrome." :
                                str + " -- is a regular palindrome.";
        } else {
            bool mirror = true;
            for(int i=0, j=len-1; i<len; i++, j--){
                if((str[i]>='A' && str[i]<='Z') && (revchars[str[i]-'A'] != str[j])){
                    mirror = false;
                    break;
                } else if((str[i]>='1' && str[i]<='9') && (revchars[str[i]-23] != str[j])){
                    mirror = false;
                    break;
                }
            }
            output = (mirror)?  str + " -- is a mirrored string." :
                                str + " -- is not a palindrome.";
        }
        cout << output << endl << endl;
    }
    return 0;
}
