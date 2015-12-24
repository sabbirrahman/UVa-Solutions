#include <iostream>
#include <string>
using namespace std;

int main(){
    string sms;
    while(cin >> sms){
        string msg;
        int len = sms.length();
        for(int i=0; i<len; i++){
            if(sms[i]>=65 && sms[i]<=67){
                msg += '2';
            }
            else if(sms[i]>=68 && sms[i]<=70){
                msg += '3';
            }
            else if(sms[i]>=71 && sms[i]<=73){
                msg += '4';
            }
            else if(sms[i]>=74 && sms[i]<=76){
                msg += '5';
            }
            else if(sms[i]>=77 && sms[i]<=79){
                msg += '6';
            }
            else if(sms[i]>=80 && sms[i]<=83){
                msg += '7';
            }
            else if(sms[i]>=84 && sms[i]<=86){
                msg += '8';
            }
            else if(sms[i]>=87 && sms[i]<=90){
                msg += '9';
            }
            else{
                msg += sms[i];
            }
        }
        cout << msg << endl;
    }
    return 0;
}
