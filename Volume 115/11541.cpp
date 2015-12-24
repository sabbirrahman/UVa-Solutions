#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    int T, cases = 0;
    string str, decoded;
    char ch;
    cin >> T;
    while(T--){
        cin >> str;
        int len = str.length();
        for(int i=0, j; i<len;){
            if(str[i]>=65 && str[i]<=90)
                ch = str[i];
            string num;
            for(j=i+1; str[j]>=48&&str[j]<=57; j++)
                num += str[j];
            int number = atoi(num.c_str());
            for(int k=0; k<number; k++)
                decoded += ch;
            i = j;
        }
        cout << "Case " << ++cases << ": " <<decoded << endl;
        decoded.clear();
    }
    return 0;
}
