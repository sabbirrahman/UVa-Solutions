#include <iostream>
#include <vector>
using namespace std;

int main(){
    unsigned short int n, i, count, sum, avr, cases=1;
    vector<unsigned short int>V(100);

    while(cin>>n && n!=0){
        count = 0;
        sum = 0;
        for(i=0; i<n; i++)
            cin>>V[i];

        for(i=0; i<n; i++){
            sum += V[i];
        }
        avr = sum/n;
        for(i=0; i<n; i++)
        while(V[i]<avr){
            count++;
            V[i]++;
        }
        cout<<"Set #"<<cases<<endl<<"The minimum number of moves is "<<count<<"."<<endl;
        cases++;
    }
    return 0;
}
