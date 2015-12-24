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
    //r("11900.in");
    //w("11900.out");
    int T;
    cin >> T;
    for(int cases=1; cases<=T; cases++){
        cout << "Case " << cases << ": ";
        int N, P, Q;
        cin >> N >> P >> Q;
        int W;
        int count = 0;
        int totalW = 0;
        for(int i=0; i<N; i++){
            cin >> W;
            if(totalW+W<=Q && count<P){
                count ++;
                totalW += W;
            }
        }
        cout << count << endl;
    }
    return 0;
}
