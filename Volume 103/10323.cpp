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

int main(){
    ios::sync_with_stdio(false);
    int N;
    ull factorial[6] = {40320, 362880, 3628800, 39916800, 479001600, 6227020800};
    //r(input);
    //w(output);
    while(cin >> N){
        if(N<=0){
            if(N&1){
                cout << "Overflow!" << endl;
            }
            else{
                cout << "Underflow!" << endl;
            }
        }
        else if(N<8){
            cout << "Underflow!" << endl;
        }
        else if(N>13){
            cout << "Overflow!" << endl;
        }
        else{
            cout << factorial[N-8] << endl;
        }
    }
    return 0;
}
