#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int T;
    unsigned int acount = 0;
    string opt;
    cin >> T;
    while(T--){
        cin >> opt;
        if(opt=="donate"){
            unsigned int in;
            cin >> in;
            acount += in;
        }
        else{
            cout << acount << endl;
        }
    }
    return 0;
}
