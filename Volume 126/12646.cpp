/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include <iostream>
#include <cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("12646.in");
    //w("12646.out");
    char ans[2][2][2];
    ans[0][0][0] = '*';
    ans[0][0][1] = 'C';
    ans[0][1][0] = 'B';
    ans[0][1][1] = 'A';
    ans[1][0][0] = 'A';
    ans[1][0][1] = 'B';
    ans[1][1][0] = 'C';
    ans[1][1][1] = '*';
    int A, B, C;
    while(cin >> A >> B >> C){
        cout << ans[A][B][C] << endl;
    }
    return 0;
}
