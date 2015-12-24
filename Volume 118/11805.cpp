#include <iostream>
using namespace std;

int main(){
    unsigned short int T, N, K, P, i, caseno=1, current;
    cin>>T;

    while(T--){
        cin>>N>>K>>P;
        unsigned short int pass_count;
        current = K;
        pass_count=0;
        while(pass_count!=P){
            if(current==N)
                current = 0;
            current++;
            pass_count++;
        }
        cout<<"Case "<<caseno++<<": "<<current<<endl;
    }
}
