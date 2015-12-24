#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <utility>
#include <set>

using namespace std;

#define pf printf
#define sc scanf
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define ft first
#define se second
#define pi 2*acos(0.0)

typedef long int LI;
typedef unsigned long int ULI;
typedef long long int LLI;
typedef unsigned long long int ULLI;

int main(){
    int i=0;
    string word;
    while(cin >> word && word!="#"){
        if(word=="HELLO")
            pf("Case %d: ENGLISH\n", ++i);
            else if(word=="HOLA")
                pf("Case %d: SPANISH\n", ++i);
                else if(word=="HALLO")
                    pf("Case %d: GERMAN\n", ++i);
                    else if(word=="BONJOUR")
                        pf("Case %d: FRENCH\n", ++i);
                        else if(word=="CIAO")
                            pf("Case %d: ITALIAN\n", ++i);
                            else if(word=="ZDRAVSTVUJTE")
                                pf("Case %d: RUSSIAN\n", ++i);
                                else
                                    pf("Case %d: UNKNOWN\n", ++i);
    }
    return 0;
}
