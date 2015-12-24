#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    //freopen("10107.in", "r", stdin);
    //freopen("10107.out", "w", stdout);
    vector<unsigned int>data;
    unsigned int N;
    while(cin >> N){
        data.push_back(N);
        sort(data.begin(), data.end());
        int size = data.size();
        int mid = size/2;
        if(size&1){
            cout << data[mid] << endl;
        } else {
            cout << (data[mid]+data[mid-1])/2 << endl;
        }
    }
    return 0;
}
