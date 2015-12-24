#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int len, word_count;
    bool word_started = false, word_ended = false;
    while(getline(cin, str)){
        len = str.length();
        word_count = 0;
        word_started = false;
        word_ended = false;
        for(int i=0; i<len; i++){
            if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122)){
                word_started = true;
                if(i+1==len){
                    word_count++;
                }
                continue;
            }
            else {
                if(word_started){
                    word_ended = true;
                }
            }
            if(word_started&&word_ended){
                word_count++;
            }
            word_started = false;
            word_ended = false;
        }
        cout << word_count << endl;
    }
    return 0;
}
