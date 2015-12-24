#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <utility>
using namespace std;

int main(){
    int T, i=0;
    cin >> T;
    while(T--){
        pair <string, int> input[10];
        for(int i=0; i<10; i++)
            cin >> input[i].first >> input[i].second;
        int max = 0;
        for(int i=0; i<10; i++){
            if(input[i].second>max){
                max = input[i].second;
            }
        }
        printf("Case #%d:\n", ++i);
        for(int i=0; i<10; i++){
            if(input[i].second==max){
                cout << input[i].first << endl;
            }
        }
    }
    return 0;
}
