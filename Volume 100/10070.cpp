#include <iostream>
#include <cstdio>
using namespace std;

bool isDivisible(string num, int divisor){
    int len = num.size();
    int result = 0;
    for(int i=0; i<len; i++){
        int number = (num[i]-'0') + (result * 10);
        result = number%divisor;
    }
    return (result) ? false : true;
}

bool isLeapYear(string year){
    return ((isDivisible(year, 4) && !isDivisible(year, 100)) || isDivisible(year, 400)) ? true : false;
}

bool isHuluculu(string year){
    return (isDivisible(year, 15)) ? true : false;
}

bool isBulukulu(string year, bool LeapYear){
    return (LeapYear && isDivisible(year, 55)) ? true : false;
}

int main(){
    //freopen("10070.in", "r", stdin);
    //freopen("10070.out", "w", stdout);
    string year;
    bool first = true;
    while(cin >> year){
        if(!first) cout << endl;
        first = false;
        bool LeapYear = isLeapYear(year);
        bool Huluculu = isHuluculu(year);
        bool Bulukulu = isBulukulu(year, LeapYear);
        if(!LeapYear && !Huluculu && !Bulukulu) cout << "This is an ordinary year." << endl;
        if(LeapYear) cout << "This is leap year." << endl;
        if(Huluculu) cout << "This is huluculu festival year." << endl;
        if(Bulukulu) cout << "This is bulukulu festival year." << endl;
    }
    return 0;
}
