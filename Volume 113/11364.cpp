/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<cstdio>

using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("11364.in");
    //w("11364.out");
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++) cin >> arr[i];
        sort(arr, arr+N);
        int sum = 0;
        for(int i=N-1; i>0; i--){
            sum += arr[i] - arr[i-1];
        }
        cout << sum * 2 << endl;
    }
    return 0;
}
