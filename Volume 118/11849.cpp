#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <set>
using namespace std;

int main(){
    //freopen("11849.in", "r", stdin);
    //freopen("11849.out", "w", stdout);
    int N, M;
    while(cin >> N >> M){
        if(!N && !M) break;
        set<int>Jack, Jill;

        for(int i=0; i<N; i++) { int temp; cin >> temp; Jack.insert(temp); }
        for(int i=0; i<M; i++) { int temp; cin >> temp; Jill.insert(temp); }

        vector<int>V(min(N, M));
        vector<int>::iterator it;

        it = set_intersection(Jack.begin(), Jack.end(), Jill.begin(), Jill.end(), V.begin());
        V.resize(it-V.begin());

        cout << V.size() << endl;
    }
    return 0;
}
