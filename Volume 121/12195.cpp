#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>

using namespace std;

int getDuration(char ch){
    switch(ch){
        case 'W': return 1000000;
        case 'H': return  500000;
        case 'Q': return  250000;
        case 'E': return  125000;
        case 'S': return   62500;
        case 'T': return   31250;
        case 'X': return   15625;
    }
}

vector<string> explode(string const&s, char delim){
    vector<string>result;
    istringstream iss(s);
    for(string token; getline(iss, token, delim);){
        result.push_back(token);
    }
    return result;
}

int main(){
    //freopen("12195.in", "r", stdin);
    //freopen("12195.out", "w", stdout);
    string music;
    while(cin >> music && music!="*"){
        vector<string>result = explode(music, '/');
        int correct = 0;
        int lim = result.size();
        for(int i=1; i<lim; i++){
            int len = result[i].size();
            int sum = 0;
            for(int j=0; j<len; j++){
                sum += getDuration(result[i][j]);
            }
            if(sum==1000000) correct++;
        }
        cout << correct << endl;
    }
    return 0;
}
