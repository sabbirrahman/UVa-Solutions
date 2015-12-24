#include <iostream>
#include <cstdio>
using namespace std;

class UF {
    int parent[30001];
    int size[30001];
    int n;
    public:
    UF(int N){
        n=N;
        for(int i=0; i<=N; i++){
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
    int max_people(){
        int max = 0;
        for(int i=0; i<=n; i++){
            if(size[i]>max) max = size[i];
        }
        return max;
    }
};

int main(){
    int T;
    ios::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    //freopen("10608.out", "w", stdout);
    cin >> T;
    while(T--){
        int N, M;
        cin >> N >> M;
        UF uf(N);
        while(M--){
            int A, B;
            cin >> A >> B;
            uf.connect(A, B);
        }
        cout << uf.max_people() << endl;
    }
    return 0;
}
