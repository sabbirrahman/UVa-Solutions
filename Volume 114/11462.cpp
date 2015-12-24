#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    unsigned int n;
    freopen("11462.in", "r", stdin);
    while(scanf("%d", &n)&&n){
        vector <unsigned short int> V(n);

        for(unsigned int i=0; i<n; i++)
            scanf("%d", &V[i]);

        sort(V.begin(), V.end());

        for(unsigned int i=0; i<n-1; i++)
                printf("%d ", V[i]);
        printf("%d", V[n-1]);

        printf("\n");
    }
    return 0;
}
