#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
using namespace std;

int parseIntFromBack(string inp){
    int len = inp.size();
    string temp;
    for(int i=8; i<len; i++) temp += inp[i];
    return atoi(temp.c_str());
}

int main(){
    //freopen("12503.in", "r", stdin);
    //freopen("12503.out", "w", stdout);
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        getchar();
        vector <char> instruction;
        int crnt_pos = 0;
        for(int i=0; i<N; i++){
            string temp;
            getline(cin, temp);
            if(temp == "LEFT"){
                instruction.push_back('L');
                crnt_pos -= 1;
            } else if(temp == "RIGHT"){
                instruction.push_back('R');
                crnt_pos += 1;
            } else {
                int index = parseIntFromBack(temp)-1;
                instruction.push_back(instruction[index]);
                crnt_pos = (instruction[index]=='L')? crnt_pos - 1 : crnt_pos + 1;
            }
        }
        cout << crnt_pos << endl;
    }
    return 0;
}
