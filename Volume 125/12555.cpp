#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    //freopen("12555.in", "r", stdin);
    //freopen("12555.out", "w", stdout);
    int T;
    cin >> T;
    for(int cas=1; cas<=T; cas++){
        int a, b;
        string str;
        cin >> a >> str;
        b = str.size()>3 ? (int)str[3]-'0' : 0;
        cout << "Case " << cas << ": " << (a*0.5) + (b*0.05) << endl;
    }
    return 0;
}
