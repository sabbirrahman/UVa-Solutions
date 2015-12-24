#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
    //freopen("10530.in", "r", stdin);
    //freopen("10530.out", "w", stdout);
    int N;
    vector<char>position;
    vector<int >number;
    while(cin >> N && N!=0){
        string str;
        getchar();
        getline(cin, str);
        if(str=="too high"){
            position.push_back('H');
            number.push_back(N);
        } else if(str=="too low"){
            position.push_back('L');
            number.push_back(N);
        } else if(str=="right on"){
            int len = position.size();
            bool cheated = false;
            for(int i=0; i<len; i++){
                if(position[i]=='H' && number[i]<=N){
                    cheated = true;
                } else if(position[i]=='L' && number[i]>=N){
                    cheated = true;
                }
            }
            if(cheated){
                cout << "Stan is dishonest" << endl;
            } else {
                cout << "Stan may be honest" << endl;
            }
            position.clear();
            number.clear();
        }
    }
    return 0;
}
