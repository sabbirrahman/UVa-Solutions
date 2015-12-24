#include <iostream>
#include <cstdio>

using namespace std;

unsigned int cycle_lenth;

unsigned int cycle(unsigned int n);

int main(){

	unsigned int i, j;


	while(scanf("%d %d", &i, &j) != EOF){

        printf("%d %d ", i, j);
        if(i>j) swap(i, j);
        unsigned int max_cycle_lenth = 0;
        unsigned int cycle_lenth;
        while(i<=j){
            ::cycle_lenth = 0;
            cycle_lenth = cycle(i);
            if(cycle_lenth>max_cycle_lenth)
                max_cycle_lenth = cycle_lenth;
            i++;
        }
        printf("%d\n", max_cycle_lenth);
	}
	return 0;
}

unsigned int cycle(unsigned int n){
    if(n==1){
        cycle_lenth++;
        return cycle_lenth;
    }
        else if(n%2!=0){
            cycle_lenth++;
            return cycle((3*n+1));
        }
            else {
                cycle_lenth++;
                return cycle(n/2);
            }
}
