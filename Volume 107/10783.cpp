#include <iostream>
using namespace std;

int main(){
    unsigned short int T, a, b, i, sum, cases=1;
    cin>>T;
    while(T--){
        sum = 0;
        cin>>a>>b;
        if(a%2==0)
            a += 1;
        for(i=a; i<=b; i+=2)
            sum += i;
        cout<<"Case "<<cases<<": "<<sum<<endl;
        cases++;
    }
    return 0;
}
