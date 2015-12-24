/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

int main(){
    ios::sync_with_stdio(false);
    //r("10041.in");
    //w(".out");
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[N];
        for(int i=0; i<N; i++) cin >> arr[i];

        sort(arr, arr+N);

        int sum = 0;
        int mid = arr[N/2];
        for(int i=0; i<N; i++){
            sum += abs(arr[i] - mid);
        }

        cout << sum << endl;
    }
    return 0;
}
