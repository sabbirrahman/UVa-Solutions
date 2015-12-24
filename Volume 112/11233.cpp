#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(){
    int L, N;
    cin >> L >> N;
    pair <string, string> List[L];
    string words[N];
    for(int i=0; i<L; i++){
        cin >> List[i].first >> List[i].second;
    }
    for(int i=0; i<N; i++){
        cin >> words[i];
    }
    for(int i=0; i<N; i++){
        int len = words[i].length();
        bool done = false;
        for(int j=0; j<L; j++){
            if(words[i]==List[j].first){
                words[i] = List[j].second;
                done = true;
                break;
            }
        }
        if(done){
            cout << words[i] << endl;
            continue;
        }
        if(((words[i][len-2]!='a')&&(words[i][len-2]!='e')&&(words[i][len-2]!='i')&&(words[i][len-2]!='o')&&(words[i][len-2]!='u'))&&(words[i][len-1]=='y')){
            words[i].erase(len-1, 1);
            words[i] += "ies";
        }
        else if(words[i][len-1]=='o'||words[i][len-1]=='s'||words[i][len-1]=='x'){
            words[i] += "es";
        }
        else if((words[i][len-2]=='c' && words[i][len-1]=='h') || (words[i][len-2]=='s' && words[i][len-1]=='h')){
            words[i] += "es";
        }
        else {
            words[i] += 's';
        }
        cout << words[i] << endl;
        words[i].clear();
    }
    return 0;
}
