#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    string input;
    cin >> N;
    while(N--){
        cin >> input;
        int M, A, R, G, I, T;
        M=A=R=G=I=T=0;
        int len = input.length();
        sort(input.begin(), input.end());
        for(int i=0; i<len; i++){
            if(input[i]=='A') A++;
            else if(input[i]=='G') G++;
            else if(input[i]=='I') I++;
            else if(input[i]=='M') M++;
            else if(input[i]=='R') R++;
            else if(input[i]=='T') T++;
        }
        int pizza = 0;
        while(1){
            if(!(M>=1 && A>=3 && R>=2 && G>=1 && I>=1 && T>=1)) break;
            pizza++;
            M--; A-=3; R-=2; G--; I--; T--;
        }
        cout << pizza <<endl;
    }
    return 0;
}
