#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;

#define LIMIT 1000000
bool prime[LIMIT+10];

void prime_generate(){
    prime[0] = prime[1] = true;
    int x = sqrt(LIMIT);
    for(int i=4; i<=LIMIT; i+=2){
        prime[i] = true;
    }
    for(int i=3; i<=x; i+=2){
        if(!prime[i]){
            for(int j=i*i; j<=LIMIT; j+=i){
                prime[j]=true;
            }
        }
    }
    return;
}

int main(){
    //freopen("543.in", "r", stdin);
    //freopen("543.out", "w", stdout);
    prime_generate();
    int N;
    while(cin >> N && N!=0){
        int a, b;
        for(int i=3; i<=N/2; i+=2){
            if(!prime[i] && !prime[N-i]){
                a = i;
                b = N-i;
                break;
            }
        }
        cout << N << " = " << a << " + " << b << endl;
    }
    return 0;
}
