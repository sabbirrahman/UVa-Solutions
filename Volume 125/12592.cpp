#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
    unsigned short int N, Q;
    string slogan[40], slogan2[100];

    cin>>N;
    getchar();
    for(int i=0; i<N*2; i++)
        getline(cin, slogan[i]);

    cin>>Q;
    getchar();
    for(int i=0; i<Q; i++)
        getline(cin, slogan2[i]);

    for(int j=0; j<Q; j++)
        for(int i=0; i<N*2; i+=2){
            if(slogan[i]==slogan2[j]){
                cout<<slogan[i+1]<<endl;
                break;
            }
        }
    return 0;
}
