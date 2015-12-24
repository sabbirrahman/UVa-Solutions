#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>
#include <bitset>
#include <set>

using namespace std;

#define pf printf
#define sc scanf
#define pi 2*acos(0.0)
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define g 9.81
typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int ULLI;

int main(){
    int N;
    ios::sync_with_stdio(false);
    while(cin >> N && N!=0){
        double f[N], maxf = 0.0;
        int vol[N], maxv = 0;
        for(int i=0; i<N; i++){
            int L, W, H;
            cin >> L >> W >> H;
            f[i] = g - (g/(2*H));
            vol[i] = L * W * H;
            }
        for(int i=0; i<N; i++){
            if(f[i]>maxf){
                maxf = f[i];
            }
        }
        for(int i=0; i<N; i++){
            if(maxf==f[i] && vol[i]>maxv){
                maxv = vol[i];
            }
        }
        cout << maxv << endl;
    }
    return 0;
}
