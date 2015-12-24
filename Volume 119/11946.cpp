/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<string>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("11946.in");
    //w("11946.out");
    bool blank = false;
    string chars = "OIZEASGTBP";
    int T;
    cin >> T;
    string str = "";
    getline(cin, str);
    for(int cases=0; cases<T; cases++){
        if(blank) cout << endl;
        blank = true;
        while(getline(cin, str)){
            if(str.empty()) break;
            int len = str.size();
            for(int i=0; i<len; i++){
                if(str[i]>='0' && str[i]<='9'){
                    cout << chars[str[i]-'0'];
                } else {
                    cout << str[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
