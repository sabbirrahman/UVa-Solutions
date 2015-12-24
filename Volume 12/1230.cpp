/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<iostream>
#include<cstdio>

using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define ll long long int

ll M;
ll bigmod(ll b, ll p);

int main(){
    ios::sync_with_stdio(false);
    //r("1230.in");
    //w("1230.out");
    int T;
    cin >> T;
    while(T--){
        ll x, y;
        cin >> x >> y >> M;
        cout << bigmod(x, y) << endl;
    }
    getchar();
    return 0;
}

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    if(p&1){
        return ((b%M)*(bigmod(b,p-1)))%M;
    }
    else{
        ll c = bigmod(b, p/2);
        return ((c%M)*(c%M))%M;
    }
}
