#include <iostream>
using namespace std;
int main(){
    int N, f, e, c;
    cin >> N;
    while(N--){
        cin >> f >> e >> c;
        int current_empty_can = f + e;
        int new_soda_can = 0;
        while(current_empty_can>=c){
            new_soda_can += current_empty_can / c;
            current_empty_can = (current_empty_can%c)+(current_empty_can/c);
        }
        cout << new_soda_can << endl;
    }
    return 0;
}
