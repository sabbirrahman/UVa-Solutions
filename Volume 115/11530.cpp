#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    int T, cases = 0;
    string sms;
    cin >> T;
    getchar();
    while(T--){
        getline(cin, sms);
        int count = 0;
        int len = sms.length();
        for(int i=0; i<len; i++){
                 if(sms[i]=='a'||sms[i]=='d'||sms[i]=='g'||sms[i]=='j'||sms[i]=='m'||sms[i]=='p'||sms[i]=='t'||sms[i]=='w'||sms[i]==' ')
                count++;
            else if(sms[i]=='b'||sms[i]=='e'||sms[i]=='h'||sms[i]=='k'||sms[i]=='n'||sms[i]=='q'||sms[i]=='u'||sms[i]=='x')
                count += 2;
            else if(sms[i]=='c'||sms[i]=='f'||sms[i]=='i'||sms[i]=='l'||sms[i]=='o'||sms[i]=='r'||sms[i]=='v'||sms[i]=='y')
                count += 3;
            else if(sms[i]=='s'||sms[i]=='z')
                count += 4;
        }
        cout << "Case #" << ++cases << ": " << count << endl;
    }
    return 0;
}
