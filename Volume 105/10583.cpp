#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class UF {
    vector <int> parent;
    vector <int> size;
    int n;
    public:
    UF(int N){
        n = N;
        parent.resize(N);
        size.resize(N);
        for(int i=0; i<N; i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    void connect(int i, int j){
        int a = find_root(i);
        int b = find_root(j);
        if(a == b) return;
        if(size[a]<size[b]){
            parent[a] = b;
            size[b] += size[a];
        }
        else{
            parent[b] = a;
            size[a] += size[b];
        }
    }
    int find_root(int r){
        if(parent[r]==r) return r;
        return parent[r] = find_root(parent[r]);
    }
    int countTrees(){
        int count = 0;
        for(int i=1; i<n; i++){
            if(parent[i] == i) count++;
        }
        return count;
    }
};

int main(){
    int M, N, cases = 0;
    //freopen("input.txt", "r", stdin);
    while(cin >> N >> M){
        if(!N && !M) break;
        UF uf(N+1);
        while(M--){
            int A, B;
            cin >> A >> B;
            uf.connect(A, B);
        }
        cout << "Case " << ++cases << ": " << uf.countTrees() <<  endl;
    }
    return 0;
}
