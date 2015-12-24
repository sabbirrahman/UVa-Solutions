#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main(){
    unsigned short int C, N, i, count;
    unsigned int sum;
    float avr, above_avr;
    vector <unsigned short int> V(1000);
    cin>>C;
    while(C--){
        sum = 0;
        count = 0;
        cin>>N;
        for(i=0; i<N; i++)
            cin>>V[i];
        for(i=0; i<N; i++)
            sum += V[i];
        avr = (float)sum/(float)N;
        for(i=0; i<N; i++)
            if(V[i]>avr)
                count++;
        above_avr = (float)(100*count)/(float)N;
        printf("%.3f", above_avr);
        cout<<"%"<<endl;
    }
    return 0;
}
