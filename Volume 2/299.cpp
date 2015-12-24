#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<utility>
#include<string>
#include<cstdio>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<cmath>
#include<list>
#include<set>
#include<map>

using namespace std;

#define pf printf
#define sc scanf
#define pi 2*acos(0.0)
#define ft first
#define se second
#define r(input) freopen("input.in","r",stdin)
#define w(output) freopen("output.out","w",stdout)
#define Sort(v) sort(v.begin(),v.end())
#define ms(a,d) memset(a,d,sizeof a)
#define ll long long int
#define ull unsigned long long int

int main(){
    ios::sync_with_stdio(false);
    int T;
    //r(input);
    //w(output);
    cin >> T;
    while(T--){
        int L;
        cin >> L;
        int arr[L];
        int count = 0;
        for(int i=0; i<L; i++) cin >> arr[i];
        for(int i=0; i<L-1; i++){
            for(int j=0; j<L-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    count++;
                }
            }
        }
        cout << "Optimal train swapping takes "<< count << " swaps." << endl;
    }
    return 0;
}
