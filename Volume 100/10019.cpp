#include <iostream>
#include <sstream>
#include <bitset>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        string M;
        cin >> M;
        int a, b;
        stringstream(M) >> dec >> a;
        stringstream(M) >> hex >> b;
        bitset<16>b1(a);
        bitset<16>b2(b);
        cout << b1.count() << " " << b2.count() << endl;
    }
    return 0;
}
