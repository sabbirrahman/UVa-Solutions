#include <iostream>
using namespace std;

int main(){
    long long int a, b, c, d, L;
    while(cin>>a>>b>>c>>d>>L){
        if(a==0&&b==0&&c==0&&d==0&&L==0)
            break;
        long long int count = 0;
        for(long long int n=0; n<=L; n++){
            long long int res = a*n*n + b*n + c;
            if(res%d==0) count++;
        }
        cout << count << endl;
    }
    return 0;
}
