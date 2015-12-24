#include <iostream>
#include <string>
using namespace std;

int main(){
    string str, startq = "\"", endq = "''";
    unsigned short int len, count, i;
    bool ok = true;
    while(getline(cin, str)){
        len = str.length();
        count=0;
        for(i=0; i<len; i++){
            if(str[i]=='\"')
                count++;
        }
        for(i=0; i<len+count; i++){
            if(str[i]=='\"'){
                if(ok){
                    str[i]='`';
                    str.insert(i, "`");
                    ok = false;
                }
                else {
                    str[i]='\'';
                    str.insert(i, "\'");
                    ok = true;
                }
            }
        }
        cout<<str<<endl;

    }
    return 0;
}
