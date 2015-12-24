#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int G;
    string N;
    while(cin >> G && G!=0){
        cin >> N;
        int len = N.length();
        int glen = len/G;
        string temp;
        string str;
        for(int i=0; i<len; i++){
            temp += N[i];
            if((i+1)%glen==0){
                reverse(temp.begin(), temp.end());
                str += temp;
                temp.clear();
            }
        }
        cout << str << endl;
        str.clear();
    }
    return 0;
}
