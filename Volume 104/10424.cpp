#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int sumofdigis(int n);
int main(){
    string name1;
    string name2;
    bool pairdone = false;
    int sum1 = 0;
    int sum2 = 0;
    while(getline(cin, name1)){
        int len = name1.length();
        int sum = 0;
        for(int i=0; i<len; i++){
            if(isalpha(name1[i]))
                sum += tolower(name1[i])-96;
        }
        if(pairdone){
            sum2 = sumofdigis(sum);
            if(sum1>sum2){
                printf("%.2lf %c\n", ((double)sum2*100.00)/(double)sum1, '%');
            }
            else {
                printf("%.2lf %c\n", ((double)sum1*100.00)/(double)sum2, '%');
            }
            pairdone = false;
        }
        else {
            sum1 = sumofdigis(sum);
            pairdone = true;
        }
    }
    return 0;
}
int sumofdigis(int n){
    if(n<=9)
        return n;
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    sumofdigis(sum);
}
