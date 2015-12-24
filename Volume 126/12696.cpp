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

#define Lenght 56.00
#define Width 45.00
#define Depth 25.00
#define Weight 7.00
#define MAX 125.00

int main(){
    ios::sync_with_stdio(false);
    //r("12696.in");
    //w("12696.out");
    int T;
    int count = 0;
    cin >> T;
    while(T--){
        double L, W, D, w, total;
        cin >> L >> W >> D >> w;
        total = L + W + D;
        if(((L<=Lenght && W<=Width && D<=Depth) || total<=MAX) && w<=Weight){
            cout << "1" << endl;
            count++;
        } else {
            cout << "0" << endl;
        }
    }
    cout << count << endl;
    return 0;
}
