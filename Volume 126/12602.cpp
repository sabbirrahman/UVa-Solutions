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
        char ch1, ch2, ch3, ch4;
        int number;
        cin >> ch1 >> ch2 >> ch3 >> ch4 >> number;
        int letter = (((ch1-65)*676)+((ch2-65)*26)+(ch3-65));
        if(abs(number-letter)<=100){
            cout << "nice" << endl;
        }
        else {
            cout << "not nice" << endl;
        }
    }
    return 0;
}
