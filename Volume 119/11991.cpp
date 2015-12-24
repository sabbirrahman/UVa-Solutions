#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

#define SIZE 1000001

vector<unsigned int>vec[SIZE];

int main(){
    ios::sync_with_stdio(false);
    unsigned int n, m;
    //freopen("11991.in", "r", stdin);
    //freopen("11991.out", "w", stdout);
    while(cin >> n >> m){
        for(unsigned int i=0; i<SIZE; i++) vec[i].clear();
        for(unsigned int i=1; i<=n; i++){
            unsigned int temp;
            cin >> temp;
            vec[temp].push_back(i);
        }
        while(m--){
            unsigned int k, v;
            cin >> k >> v;
            if(vec[v].size()>=k){
                cout << vec[v][k-1] << endl;
            } else {
                cout << (0) << endl;
            }
        }
    }
    return 0;
}
