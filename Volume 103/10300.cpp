#include <iostream>
using namespace std;

int main(){
    int test_case, farmers;
    cin >> test_case;
    while(test_case-- && cin >> farmers){
        long farm_yard, animal, equipment, res,total=0;
        while(farmers--){
            cin >> farm_yard >> animal >> equipment;
            res = farm_yard * equipment;
            total += res;
        }
        cout << total << endl;
    }
    return 0;
}
