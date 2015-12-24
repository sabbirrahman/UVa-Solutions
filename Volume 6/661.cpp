#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, m, c, cas = 1;
    //freopen("661.in", "r", stdin);
    //freopen("661.out", "w", stdout);
    while(cin >> n >> m >> c){
        if(!n && !m && !c) break;
        int devices[n];
        bool status[n];
        for(int i=0; i<n; i++){
            cin >> devices[i];
            status[i] = false;
        }
        int power = 0;
        int max_power = 0;
        for(int i=0; i<m; i++){
            int index;
            cin >> index;
            index -= 1;
            if(status[index]){
                status[index] = false;
                power -= devices[index];
            } else {
                status[index] = true;
                power += devices[index];
                if(power > max_power) max_power = power;
            }
        }
        cout << "Sequence " << cas << endl;
        if(max_power > c){
            cout << "Fuse was blown." << endl << endl;
        } else {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << max_power << " amperes." << endl << endl;
        }
        cas++;
    }
    return 0;
}
