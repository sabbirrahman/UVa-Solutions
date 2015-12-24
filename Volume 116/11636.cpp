#include <iostream>
using namespace std;
int main(){
    int N, i = 0;
    while(cin >> N && N>0){
        int printf = 1;
        int copied = 0;
        int pasted = 0;
        while(printf!=N){
            if(printf<=(N-printf))
                copied = printf;
            else
                copied = N-printf;
            pasted++;
            printf += copied;
        }
        cout << "Case " << ++i << ": " << pasted << endl;
    }
    return 0;
}
