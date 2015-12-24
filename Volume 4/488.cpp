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
    int T;
    //r(input);
    //w(output);
    cin >> T;
    while(T--){
        int A, F;
        cin >> A >> F;
        while(F--){
            for(int i=1; i<=A; i++){
                for(int j=1; j<=i; j++){
                    cout << i;
                }
                cout << endl;
            }
            for(int i=A-1; i>=1; i--){
                for(int j=1; j<=i; j++){
                    cout << i;
                }
                cout << endl;
            }
            if(F!=0) cout << endl;
        }
        if(T!=0) cout << endl;
    }
    return 0;
}
