#include <iostream>
#include <cstdio>
using namespace std;

char soundex(char ch){
    switch(ch){
        case 'B':
        case 'F':
        case 'P':
        case 'V': return '1';
        case 'C':
        case 'G':
        case 'J':
        case 'K':
        case 'Q':
        case 'S':
        case 'X':
        case 'Z': return '2';
        case 'D':
        case 'T': return '3';
        case 'L': return '4';
        case 'M':
        case 'N': return '5';
        case 'R': return '6';
        default : return '0';
    }
}

int main(){
    //freopen("10260.in", "r", stdin);
    //freopen("10260.out", "w", stdout);
    string str;
    while(cin >> str){
        int len = str.size();
        string out = "";
        for(int i=0; i<len; i++){
            char code = soundex(str[i]);
            if(code == '0') continue;
            if(i>0 && soundex(str[i-1])==code) continue;
            out += code;
        }
        cout << out << endl;
    }
    return 0;
}
