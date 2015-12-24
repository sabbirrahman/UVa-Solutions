#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, d, r;
    while(cin >> n >> d >> r){
        if(!n&!d&!r) break;
        int day[n], eve[n];
        for(int i=0; i<n; i++) cin >> day[i];
        for(int i=0; i<n; i++) cin >> eve[i];
        sort(day, day+n);
        sort(eve, eve+n);
        int cost = 0;
        for(int i=0; i<n; i++){
            int temp = day[i] + eve[n-1-i];
            if(temp > d) cost += (temp-d);
        }
        cout << cost * r << endl;
    }
    return 0;
}
