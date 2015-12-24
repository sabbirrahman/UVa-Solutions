#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    string str1, str2, str3;
    cin >> t;
    while(t--){
        cin >> str1 >> str2;
        int len1 = str1.length();
        int len2 = str2.length();
        int carry = 0;
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
                str3 += (((str1[i]-48)+(str2[i]-48)+carry)%10)+48;
                carry = 1;
                }
            else {
                str3 += (((str1[i]-48)+(str2[i]-48)+carry))+48;
                carry = 0;
            }
        }
        if(carry!=0) {
            str3 += '1';
            carry = 0;
        }
        while(str3[0]=='0'){
            str3.erase(str3.begin());
        }
        cout << str3 << endl;
        str3.clear();
    }
    return 0;
}
