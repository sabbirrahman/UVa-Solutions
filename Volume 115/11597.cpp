/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int N;
    for(int cases=1; cin >> N && N!=0; cases++){
        cout << "Case " << cases << ": " << (N>>1) << endl;
    }
    return 0;
}
