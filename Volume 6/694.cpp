#include <iostream>
#include <cstdio>
using namespace std;

typedef long long int ll;

ll L, count;
ll collatzSequence(ll A){
    if(A>L)  return count;
    count++;
    if(A==1) return count;
    if(A&1)  return collatzSequence((3 * A) + 1);
    else     return collatzSequence(A/2);
}

int main(){
    //freopen("694.in", "r", stdin);
    //freopen("694.out", "w", stdout);
    ll A, cas = 1;
    while(cin >> A >> L){
        if(A<0 && L<0) break;
        count = 0;
        cout << "Case " << cas++ << ": A = " << A << ", limit = " << L << ", number of terms = ";
        cout << collatzSequence(A) << endl;
    }
    return 0;
}
