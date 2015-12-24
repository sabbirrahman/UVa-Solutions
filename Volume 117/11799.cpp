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
    //r("11799.in");
    //w("11799.out");
    int T;
    cin >> T;
    for(int cases=1; cases<=T; cases++){
        int N;
        cin >> N;
        int minSpeed = 0;
        while(N--){
            int speed;
            cin >> speed;
            if(speed > minSpeed) minSpeed = speed;
        }
        cout << "Case " << cases << ": " << minSpeed << endl;
    }
    return 0;
}
