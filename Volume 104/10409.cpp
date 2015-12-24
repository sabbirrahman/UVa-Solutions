#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("10409.in", "r", stdin);
    //freopen("10409.out", "w", stdout);
    int num;
    while(cin >> num && num!=0){
        int T = 1, N = 2, W = 3, E = 4, S = 5, B = 6;
        for(int i=0; i<num; i++){
            string str; cin >> str;
            if(str=="north"){ int tT = T; T = S; S = B; B = N; N = tT; }
            if(str=="east" ){ int tT = T; T = W; W = B; B = E; E = tT; }
            if(str=="south"){ int tT = T; T = N; N = B; B = S; S = tT; }
            if(str=="west" ){ int tT = T; T = E; E = B; B = W; W = tT; }
        }
        cout << T << endl;
    }
    return 0;
}
