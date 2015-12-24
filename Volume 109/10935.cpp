#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main(){
    //freopen("10935.in", "r", stdin);
    //freopen("10935.out", "w", stdout);
    int N;
    while(cin >> N && N!=0){
        queue<int>Q;
        for(int i=1; i<=N; i++) Q.push(i);
        cout << "Discarded cards:";
        while(Q.size()>1){
            cout << " " << Q.front();
            if(Q.size()>2) cout << ",";
            Q.pop();
            Q.push(Q.front());
            Q.pop();
        }
        cout << endl;
        cout << "Remaining card: " << Q.front() << endl;
    }
    return 0;
}
