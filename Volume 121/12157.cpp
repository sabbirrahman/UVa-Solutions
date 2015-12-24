#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    //freopen("12157.in", "r", stdin);
    //freopen("12157.out", "w", stdout);
    int T;
    cin >> T;
    for(int cas=1; cas<=T; cas++){
        int N;
        cin >> N;
        int Mile=0, Juice=0;
        for(int i=0; i<N; i++){
            int duration;
            cin >> duration;
            int mile  = ((duration/30) + 1) * 10;
            int juice = ((duration/60) + 1) * 15;
            Mile  += mile;
            Juice += juice;
        }
        cout << "Case " << cas << ": ";
        if(Mile==Juice){
            cout << "Mile Juice " << Mile << endl;
        } else if(Mile<Juice){
            cout << "Mile " << Mile << endl;
        } else {
            cout << "Juice " << Juice << endl;
        }
    }
    return 0;
}
