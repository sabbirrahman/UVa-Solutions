#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
    int T, i = 0;
    string str1, str2;
    cin >> T;
    getline(cin, str1);
    while(T--){
        getline(cin, str1);
        getline(cin, str2);
        if(str1==str2) cout << "Case " << ++i << ": Yes" << endl;
        else {
            int len = str1.length();
            string temp;
            for(int i=0; i<len; i++){
                if(str1[i]!=' '){
                    temp += str1[i];
                }
            }
            if(str2==temp)
                cout << "Case " << ++i << ": Output Format Error" << endl;
            else
                cout << "Case " << ++i << ": Wrong Answer" << endl;
        }
    }
    return 0;
}
