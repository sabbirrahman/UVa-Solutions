#include <iostream>
#include <sstream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    //freopen("10282.in", "r", stdin);
    //freopen("10282.out", "w", stdout);
    string str;
    map<string, string>mp;
    while(getline(cin, str) && !str.empty()){
        string str1, str2;
        istringstream iss(str);
        getline(iss, str1, ' ');
        getline(iss, str2, ' ');
        mp[str2] = str1;
    }
    while(cin >> str){
        if(mp.find(str)==mp.end()){
            cout << "eh" << endl;
        } else {
            cout << mp[str] << endl;
        }
    }
    return 0;
}
