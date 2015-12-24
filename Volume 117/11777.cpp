#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int T, term1, term2, final, atdn, ct[3], total, i=0;
    cin >> T;
    while(T--){
        cin >> term1 >> term2 >> final >> atdn >> ct[0] >> ct[1] >> ct[2];
        sort(ct, ct+3);
        total = term1+term2+final+atdn+(ct[1]+ct[2])/2;
        if(total>=90&&total<=100)
            cout << "Case " << ++i << ": A" << endl;
            else if(total>=80&&total<90)
                cout << "Case " << ++i << ": B" << endl;
                else if(total>=70&&total<80)
                    cout << "Case " << ++i << ": C" << endl;
                    else if(total>=60&&total<70)
                        cout << "Case " << ++i << ": D" << endl;
                        else if(total<60)
                            cout << "Case " << ++i << ": F" << endl;
    }
    return 0;
}
