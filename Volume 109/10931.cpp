#include <iostream>
#include <bitset>
#include <cstdio>
using namespace std;

int main(){
    //freopen("10931.in", "r", stdin);
    //freopen("10931.out", "w", stdout);
    unsigned int N;
    while(cin >> N && N!=0){
        bitset<32>BITS(N);
        string bin = BITS.to_string();
        bin = bin.substr(bin.find('1'));
        cout << "The parity of " << bin << " is " << BITS.count() << " (mod 2)." << endl;
    }
    return 0;
}
