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
int ascii[128];
int main(){
    //ios::sync_with_stdio(false);
    int N;
    //r(input);
    //w(output);
    while(cin >> N && N!=0){
        string str;
        ms(ascii, 0);
        for(int i=1; i<=N; i++){
            if(i==100) str+="c";
            if(i>=90 && i<100) str+="xc";
            if(i>=40 && i<50) str+="xl";
            if(i>=10 && i<90){
                if(i>=50 && i<90) str+="l";
                if(i/10==1 || i/10==6) str+="x";
                if(i/10==2 || i/10==7) str+="xx";
                if(i/10==3 || i/10==8) str+="xxx";
            }
            if(i%10==5 || (i%10>=5 && i%10<=8)) str+="v";
            if(i%10==1 || i%10==6) str+="i";
            else if(i%10==2 || i%10==7) str+="ii";
            else if(i%10==3 || i%10==8) str+="iii";
            else if(i%10==4) str+="iv";
            else if(i%10==9) str+="ix";
        }
        int len = str.length();
        for(int i=0; i<len; i++) ascii[str[i]]++;
        pf("%d: %d %c, %d %c, %d %c, %d %c, %d %c\n", N, ascii[105], 105, ascii[118], 118, ascii[120], 120, ascii[108], 108, ascii[99], 99);
        str.clear();
    }
    return 0;
}
