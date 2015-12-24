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
    //r("11942.in");
    //w("11942.out");
    int T;
    cin >> T;
    cout << "Lumberjacks:" << endl;
    while(T--){
        int inc[10] = {0};
        int dec[10] = {0};
        int prev, current;

        cin >> prev;
        for(int i=1; i<10; i++){
            cin >> current;
            inc[i] = (current>prev)? inc[i-1]+1: inc[i-1];
            dec[i] = (current<prev)? dec[i-1]+1: dec[i-1];
            prev = current;
        }

        if(inc[9] == 9 || dec[9] == 9){
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
    return 0;
}
