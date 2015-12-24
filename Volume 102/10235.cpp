#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<string>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<list>
#include<set>
#include<map>

using namespace std;

#define pf printf
#define sc scanf
#define pi 2*acos(0.0)
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define Sort(v) sort(v.begin(),v.end())
#define ms(a,d) memset(a,d,sizeof a)
#define ll long long int
#define ull unsigned long long int

#define MAX 1000000
bool prime[MAX+1];
void prime_generator();
int reverse(int n);

int main(){
    ios::sync_with_stdio(false);
    prime_generator();
    int N;
    //r(input);
    //w(output);
    while(cin >> N){
        int rN = reverse(N);
        if((N!=rN) && (!prime[N] && !prime[rN])){
            cout << N << " is emirp." << endl;
        }
        else if(!prime[N]){
            cout << N << " is prime." << endl;
        }
        else if(prime[N]){
            cout << N << " is not prime." << endl;
        }
    }
    return 0;
}

void prime_generator(){
    prime[0] = prime[1] = true;
    int x = sqrt(MAX);
    for(int i=4; i<=MAX; i+=2){
        prime[i] = true;
    }
    for(int i=3; i<=x; i+=2){
        if(!prime[i]){
            for(int j=i*i; j<=MAX; j+=i){
                prime[j] = true;
            }
        }
    }
    return;
}

int reverse(int n){
    int sum = 0;
    while(n>0){
        sum = sum*10 + n%10;
        n /= 10;
    }
    return sum;
}
