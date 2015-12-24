#include <iostream>
#include <cstdio>
using namespace std;

class UF{
    int parent[26];
    int size[26];
    int n;
    public:
    UF(int N){
        n = N;
        for(int i=0; i<N; i++){
            parent[i] = i;
            size[i] = 1;
        }
    }
    void connect(int i, int j){
        int a = find_root(i);
        int b = find_root(j);
        if(a==b) return;
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
    int count_root(){
        int count = 0;
        for(int i=0; i<n; i++){
            if(parent[i]==i) count++;
        }
        return count;
    }
};

int main(){
    int T;
    string line;
    bool first = true;
    //freopen("input.in","r",stdin);
    cin >> T >> line;
    getchar();
    while(T--){
        if(!first) cout << endl ;
        first = false;
        UF uf((int)(line[0]-65)+1);
        while(cin >> line && line.size()!=1){
            uf.connect((int)(line[0]-65), (int)(line[1]-65));
        }
        cout << uf.count_root() << endl;
    }
    return 0;
}
