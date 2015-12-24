#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        if(str.substr(0, 2)=="on"){
            cout << "1" << endl;
        }
        else if(str.substr(1, 3)=="ne"){
            cout << "1" << endl;
        }
        else if(str[0]=='o'&&str[2]=='e'){
            cout << "1" << endl;
        }
        else if(str.length()==3){
            cout << "2" << endl;
        }
        else {
            cout << "3" << endl;
        }
    }
    return 0;
}
