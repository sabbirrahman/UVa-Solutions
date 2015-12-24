#include <iostream>
#include <map>
using namespace std;

class UF{
    int parent[5000];
    int size[5000];
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
        if(parent[r]==r) return r;
        return parent[r] = find_root(parent[r]);
    }
    int largest_chain(){
        int max = 0;
        for(int i=0; i<n; i++){
            if(size[i] > max) max = size[i];
        }
        return max;
    }
};

int main(){
    int C, R;
    while(cin >> C >> R){
        if(!C && !R) break;
        UF uf(C);
        map <string, int> mp;
        for(int i=0; i<C; i++){
            string inp;
            cin >> inp;
            mp.insert(pair<string, int>{inp, i});
        }
        while(R--){
            string c1, c2;
            cin >> c1 >> c2;
            uf.connect(mp[c1], mp[c2]);
        }
        cout << uf.largest_chain() << endl;
    }
}
