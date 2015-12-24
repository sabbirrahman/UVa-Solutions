#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;

class UF{
    vector <int> parent;
    vector <int> size;
    public:
    UF(int N){
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
    int size_of_root(int k){
        return size[find_root(k)];
    }
};

int main(){
    int T;
    //freopen("11503.in", "r", stdin);
    //freopen("11503.out", "w", stdout);
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        UF uf(N+N);
        map <string, int> mp;
        int i = 0;
        while(N--){
            string a, b;
            cin >> a >> b;
            mp.insert(pair<string, int>{a, i});
            mp.insert(pair<string, int>{b, i+1});
            uf.connect(mp[a], mp[b]);
            cout << uf.size_of_root(mp[a]) << endl;
            i += 2;
        }
    }
    return 0;
}
