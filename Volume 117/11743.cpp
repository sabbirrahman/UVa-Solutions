#include <iostream>
using namespace std;
int sumofdigits(int n, bool select);
int sumofdigit(int n);
int main(){
    int T, arr[4];
    cin >> T;
    while(T--){
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int sum1=0, sum2=0;
        for(int i=0; i<4; i++){
            sum1 += sumofdigits(arr[i], false);
            sum2 += sumofdigits(arr[i], true);
        }
        if((sum1+sum2)%10==0){
            cout << "Valid" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}

int sumofdigits(int n, bool select){
    int sum1 = 0;
    int sum2 = 0;
    bool eo = false;
    while(n>0){
        if(!eo){
            sum1 += n%10;
            n /= 10;
            eo = true;
        }
        else {
            sum2 += sumofdigit((n%10)*2);
            n /= 10;
            eo = false;
        }
    }
    return select?sum1:sum2;
}
int sumofdigit(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
