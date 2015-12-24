#include <iostream>
using namespace std;

int main(){
    int T, N, i=0;
    cin >> T;
    while(T--){
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin >> arr[i];
        cout << "Case " << ++i << ": " << arr[N/2] << endl;
    }
    return 0;
}
