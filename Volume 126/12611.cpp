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
    int T, cases = 0;
    //r(input);
    //w(output);
    cin >> T;
    while(T--){
        int radius;
        cin >> radius;
        int length = radius*5;
        int height = (length*60)/100;
        int left = (length*45)/100;
        int right = length - left;
        cout << "Case " << ++cases << ":" << endl;
        cout << (0-left) << " " << (height/2) << endl;
        cout << (0+right) << " " << (height/2) << endl;
        cout << (0+right) << " " << (0-(height/2)) << endl;
        cout << (0-left) << " " << (0-(height/2)) << endl;
    }
    return 0;
}
