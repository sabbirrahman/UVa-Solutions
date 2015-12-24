#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int T;
    long N;
    cin >> T;
    while(T--){
        cin >> N;
        N *= 567;
        N /= 9;
        N += 7492;
        N *= 235;
        N /= 47;
        N -= 498;
        cout << abs((N%100-N%10)/10) << endl;
    }
    return 0;
}
