/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("10324.in");
    //w("10324.out");
    string str;
    for(int cases=1; cin >> str; cases++){
        cout << "Case " << cases << ":" << endl;
        int len = str.size();

        int sum[len];
        sum[0] = str[0]-'0';
        for(int i=1; i<len; i++)
            sum[i] = (str[i]==str[i-1]) ? sum[i-1] : sum[i-1]+1;

        int n;
        cin >> n;
        while(n--){
            int min, max;
            cin >> min >> max;
            if(min>max) min ^= max ^= min ^= max;
            string output = (sum[min] ^ sum[max])? "No" : "Yes";
            cout << output << endl;
        }
    }
    return 0;
}
