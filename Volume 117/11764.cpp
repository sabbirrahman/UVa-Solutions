/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("11764.in");
    //w("11764.out");
    int T;
    cin >> T;
    for(int cases=1; cases<=T; cases++){
        int N;
        cin >> N;
        int HJ=0, LJ=0, current;
        cin >> current;
        for(int i=0; i<N-1; i++){
            int wall;
            cin >> wall;
            if(wall > current) HJ++;
            else if(wall < current) LJ++;
            current = wall;
        }
        cout << "Case " << cases << ": " << HJ << " " << LJ << endl;
    }
    return 0;
}
