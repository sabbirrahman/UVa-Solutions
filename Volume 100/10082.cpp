#include <iostream>
#include <string>
using namespace std;

int main(){
    string qwerty = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string inp;
    while(getline(cin, inp)){
        int len = inp.size();
        for(int i=0; i<=len; i++){
            for(int j=0; j<47; j++){
                if(inp[i]==qwerty[j]){
                    inp[i]=qwerty[j-1];
                    break;
                }
            }
        }
        cout<<inp<<endl;
    }
    return 0;
}
