#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int cases=1; cases<=t; cases++){
        int n[3];
        for(int i=0; i<3; i++)
            cin>>n[i];
        sort(n, n+3);
        cout<<"Case "<<cases<<": "<<n[1]<<endl;
    }
    return 0;
}
