#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    string str1;
    int T;
    cin >> T;
    getchar();
    while(T--){
        getline(cin, str1);
        int len = str1.length();
        int root = sqrt(len);
        if(root*root!=len){
            cout << "INVALID" << endl;
            continue;
        }
        string str2[root];
        int k = 0;
        for(int i=0; i<len; i++){
            str2[k] += str1[i];
            if(((i+1)%root)==0) k++;
        }
        for(int i=0; i<root; i++){
            for(int j=0; j<root; j++){
                cout << str2[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}
