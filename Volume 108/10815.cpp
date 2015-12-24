#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int main(){
    set <string> dictionary;
    string word;
    while(cin >> word){
        string token="";
        int len = word.size();
        for(int i=0; i<=len; i++){
            if(isalpha(word[i])){
                token += tolower(word[i]);
            }
            else if(token!=""){
                dictionary.insert(token);
                token="";
            }
        }
    }
    for(set<string>::iterator it=dictionary.begin(); it!=dictionary.end();  it++)
        cout << *it << endl;
    return 0;
}
