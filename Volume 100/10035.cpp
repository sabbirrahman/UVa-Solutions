#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str1, str2;
    while(cin >> str1 >> str2){
        if(str1=="0"&&str2=="0")
            break;
        int len1 = str1.length();
        int len2 = str2.length();
        int carryc = 0;
        int carry = 0;
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        if(len1>len2){
            for(int i=len2; i<len1; i++)
                str2+='0';
        }
        else {
            for(int i=len1; i<len2; i++)
                str1+='0';
        }
        int len = str1.length();
        for(int i=0; i<len; i++){
            if(((str1[i]-48)+(str2[i]-48)+carry)>9){
                carryc++;
                carry = 1;
            }
            else {
                carry = 0;
            }
        }
        if(carryc==0){
            cout << "No carry operation." << endl;
        }
        else if(carryc==1){
            cout << carryc << " carry operation." << endl;
        }
        else{
            cout << carryc << " carry operations." << endl;
        }
    }
    return 0;
}
