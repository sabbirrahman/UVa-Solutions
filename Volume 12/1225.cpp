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
#include<sstream>

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
        int N, digits[11]={0};
        cin >> N;
        string str;
        for(int i=1; i<=N; i++){
            stringstream ss;
            ss << i;
            str += ss.str();
        }
        int len = str.size();
        for(int i=0; i<len; i++){
            digits[str[i]-'0']++;
        }
        for(int i=0; i<9; i++){
            cout << digits[i] << " ";
        }
        cout << digits[9] << endl;
        str.clear();
    }
    return 0;
}
