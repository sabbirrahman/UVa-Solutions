#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define RATE1 0.10
#define RATE2 0.15
#define RATE3 0.20
#define RATE4 0.25

#define LIMIT0  180000
#define LIMIT1  200000
#define LIMIT2  480000
#define LIMIT3  880000
#define LIMIT4 1180000

#define TAX0     0
#define TAX1  2000
#define TAX2 30000
#define TAX3 60000
#define TAX4 60000

int main(){
    ios::sync_with_stdio(false);
    //freopen("12342.in", "r", stdin);
    int T;
    cin >> T;
    for(int cas=1; cas<=T; cas++){
        long long int income;
        double tax = 0;
        cin >> income;

             if(income<=LIMIT0) tax = TAX0;
        else if(income<=LIMIT1) tax = TAX1;
        else if(income<=LIMIT2) tax = (((income-LIMIT0)*RATE1));
        else if(income<=LIMIT3) tax = (((income-LIMIT2)*RATE2))+TAX2;
        else if(income<=LIMIT4) tax = (((income-LIMIT3)*RATE3))+TAX2+TAX3;
        else                    tax = (((income-LIMIT4)*RATE4))+TAX2+TAX3+TAX4;

        cout << "Case " << cas << ": " << (long long int)ceil(tax) << endl;
    }
    return 0;
}
