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

bool isPrime(int n);

int main(){
    ios::sync_with_stdio(false);
    string inp;
    //r(input);
    //w(output);
    while(cin >> inp){
        int ascii[128]={0};
        int len = inp.size();
        for(int i=0; i<len; i++) ascii[inp[i]]++;
        int sum = 0;
        for(int i=65, j=27; i<=90; i++, j++){
            sum += ascii[i] * j;
        }
        for(int i=97, j=1; i<=122; i++, j++){
            sum += ascii[i] * j;
        }
        if(isPrime(sum)){
            cout << "It is a prime word." << endl;
        }
        else {
            cout << "It is not a prime word." << endl;
        }
    }
    return 0;
}

bool isPrime(int n){
    if(n==0) return false;
    if(n==1 || n==2) return true;
    if(!(n&1)) return false;
    int x = sqrt(n);
    for(int i=3; i<=x; i+=2){
        if(n%i==0) return false;
    }
    return true;
}
