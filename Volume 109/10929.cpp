#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    while(cin>>s){
        if(s=="0")
            break;

        unsigned short int len = s.length();
        short int sum = 0;

        for(unsigned short int i=0; i<len; i+=2){
            sum += s[i]-'0';
        }
        for(unsigned short int i=1; i<len; i+=2){
            sum -= s[i]-'0';
        }
        if(sum%11==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
            cout<<s<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
