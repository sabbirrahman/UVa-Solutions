#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;

int main(){
    //freopen("484.in", "r", stdin);
    //freopen("484.out", "w", stdout);
    map<string, int>m;
    vector<string>v;
    string ch;
    while(cin >> ch){
        if(m.find(ch)==m.end()) v.push_back(ch);
        m[ch]++;
    }
    for(vector<string>::iterator it = v.begin(); it!=v.end(); it++){
         cout << *it << " " << m[*it] << endl;
    }
    return 0;
}
