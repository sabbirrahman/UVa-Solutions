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
    int a, b;
    //r(input);
    //w(output);
    while(cin >> a >> b){
        if(a==-1 && b==-1) break;
        int way1 = 0;
        int way2 = 0;
        for(int i=a; i!=b; i++){
            way1++;
            if(i==99) i=-1;
        }
        for(int i=a; i!=b; i--){
            way2++;
            if(i==0) i=100;
        }
        if(way1<way2){
            cout << way1 << endl;
        }
        else {
            cout << way2 << endl;
        }
    }
    return 0;
}
