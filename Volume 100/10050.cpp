#include <iostream>
#include <vector>
using namespace std;
int main(){
    unsigned short int T, N, P, i, j, inp[100], count;
    vector<unsigned short int>strike(3650);
    cin>>T;

    while(T--){
        cin>>N>>P;

        for(i=0; i<P; i++)
            cin>>inp[i];
        for(i=0; i<=N; i++)
            strike[i] = 0;

        for(i=0; i<P; i++){
            for(j=inp[i]; j<=N; j+=inp[i]){
                if((j%7!=0)&&((j+1)%7!=0)){
                    if(strike[j]==0)
                        strike[j] = j;
                }
            }
        }
        count=0;
        for(i=1; i<=N; i++){
            if(strike[i]!=0)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
