#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>
using namespace std;

typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int ULLI;

int main(){
    string line;
    //freopen(".in","r", stdin);
    //freopen(".out","w", stdout);
    while(getline(cin, line)){
        line += ' ';
        string word;
        string newline;
        int len = line.length();
        for(int i=0; i<len; i++){
            if(line[i]!=' '){
                word+=line[i];
            }
            else {
                reverse(word.begin(), word.end());
                newline += word;
                newline += line[i];
                word.clear();
            }
        }
        newline.erase(len-1, 1);
        cout << newline << endl;
    }
    return 0;
}
