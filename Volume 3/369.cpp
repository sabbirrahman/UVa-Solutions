#include <iostream>
using namespace std;

#define MAXN 105
#define MAXR 105

typedef unsigned long long int ULLI;

ULLI nCr(unsigned int n, unsigned int r);

ULLI nCrS[MAXN][MAXR];

int main(){
    ios::sync_with_stdio(false);
    for(unsigned int i=0; i<MAXN; i++){
        for(unsigned int j=0; j<MAXR; j++){
            nCrS[i][j]=-1;
        }
    }
    unsigned int n, r;
    while(cin >> n >> r){
        if(!n && !r) break;
        cout << n << " things taken " << r << " at a time is " << nCr(n, r) <<" exactly." << endl;
    }
    return 0;
}

ULLI nCr(unsigned int n, unsigned int r){
    if(r==1) return n;
    if(n==r) return 1;
    if(nCrS[n][r]!=-1)
        return nCrS[n][r];
    else{
        nCrS[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
        return nCrS[n][r];
    }
}
