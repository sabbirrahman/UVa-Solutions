#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    unsigned short int len, i;
    while(getline(cin, str)){
        len = str.size();
        for(i=0; i<len; i++)
            str[i] = str[i]-7;
        cout<<str<<endl;
    }
    return 0;
}
