#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    while(cin >> n){
        if (n == 0) {
            cout << "Not jolly" << endl;
            continue;
        }
        vector<int>V(n);
        vector<int>Dif;
        V.clear();
        Dif.clear();
        cin >> V[0];
        for(unsigned int i=1; i<n; i++){
            cin>>V[i];
            Dif.push_back(abs(V[i] - V[i-1]));
        }
        sort(Dif.begin(), Dif.end());
        bool jolly = true;
        for(unsigned int i=0; i<n-1; i++){
            if(Dif[i]!=i+1){
                jolly = false;
                break;
            }
        }
        if(jolly) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}
