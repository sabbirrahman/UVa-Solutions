#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class UF{
    vector <int> parent;
    vector <int> size;
    public:
    UF(int N){
        parent.resize(N+1);
        size.resize(N+1);
        for(int i=0; i<=N; i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    void connect(int i, int j){
        int a = find_root(i);
        int b = find_root(j);
        if(a == b) return;
        if(size[a] < size[b]){
            parent[a] = b;
            size[b] += size[a];
        }
        else{
            parent[b] = a;
            size[a] += size[b];
        }
    }
    int find_root(int r){
        if(parent[r] == r) return r;
        return parent[r] = find_root(parent[r]);
    }
    bool isConnected(int i, int j){
        return find_root(i) == find_root(j);
    }
};

int main(){
    int T;
    //freopen("input.txt", "r", stdin);
    cin >> T;
    bool first = false;
    while(T--){
        if(first) cout << endl;
        first = true;
        int N, T=0, F=0;
        char o;
        cin >> N;
        getchar();
        UF uf(N);
        o=getchar();
        while(o!='\n' && o!=EOF){
            char str[30];
            gets(str);
            int A, B;
            sscanf(str, "%d %d", &A ,&B);
            if(o=='c'){
                uf.connect(A, B);
            }
            else if(o=='q'){
                if(uf.isConnected(A, B)) T++;
                else F++;
            }
            o=getchar();
        }
        cout << T << "," << F << endl;
    }
    return 0;
}
