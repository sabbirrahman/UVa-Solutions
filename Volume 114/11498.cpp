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
    //r("11498.in");
    //w("11498.out");
    int T;
    while(cin >> T && T!=0){
        int N, M;
        cin >> N >> M;
        while(T--){
            int X, Y;
            cin >> X >> Y;
            if(X==N || Y==M) cout << "divisa" << endl;
            else if(X>N && Y>M) cout << "NE" << endl;
            else if(X>N && Y<M) cout << "SE" << endl;
            else if(X<N && Y>M) cout << "NO" << endl;
            else if(X<N && Y<M) cout << "SO" << endl;
        }
    }
    return 0;
}
