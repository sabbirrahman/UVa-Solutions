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
    //r("1585.in");
    //w("1585.out");
    int T;
    cin >> T;
    while(T--){
        string str;
        cin >> str;
        int len = str.size();
        int sum, prev, total;
        sum = prev = total = 0;

        prev = (str[0] == 'O')? 1 : 0;
        total += prev;
        for(int i=1; i<len; i++){
            if(str[i] == 'O'){
                sum = prev + 1;
            } else {
                sum = 0;
            }
            prev = sum;
            total += sum;
        }

        cout << total << endl;
    }
    return 0;
}
