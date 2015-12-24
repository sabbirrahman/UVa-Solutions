#include<iostream>
using namespace std;
int main(){
    int i=0, T, L, W, H;
    cin>>T;
    while(T--){
        cin>>L>>W>>H;
        if(L<=20&&W<=20&&H<=20)
            cout<< "Case " << ++i << ": good" << endl;
        else
            cout<< "Case " << ++i << ": bad" << endl;
    }
    return 0;
}
