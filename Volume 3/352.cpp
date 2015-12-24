#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class UF {
    private:
        int N;
        vector <int> P;
        vector <int> S;
    public:
        UF(int n){
            N = n;
            P.resize(N);
            S.resize(N);
            for(int i=0; i<N; i++){
                P[i] = i;
                S[i] = 1;
            }
        }
        int find_root(int r){
            if(P[r]==r) return r;
            else P[r] = find_root(P[r]);
        }
        bool isConnected(int i, int j){
            return find_root(i) == find_root(j);
        }
        void connect(int i, int j){
            int a = find_root(i);
            int b = find_root(j);
            if(a == b) return;
            if(S[a]<S[b]){
                P[a] = b;
                S[b] += S[a];
            }
            else {
                P[b] = a;
                S[a] += S[b];
            }
        }
        int numberofTrees(){
            int Tree = 0;
            for(int i=1; i<N; i++){
                if(P[i]==i) Tree++;
            }
            return Tree;
        }
        void change_parent(int a){ P[a] = 0; }
};

int N;
bool validate(int i, int j){
    return ((i>=0 && i<N) && (j>=0 && j<N));
}

int node(int i, int j){
    return ((N*i)+j)+1;
}

int main(){
    freopen("352.in", "r", stdin);
    //freopen("352.out", "w", stdout);
    ios::sync_with_stdio(false);
    int cases = 0;
    int dirX[] = {-1, -1, -1, +0, +0, +1, +1, +1};
    int dirY[] = {-1, +0, +1, +1, -1, -1, +0, +1};
    while(cin >> N){
        string image[N];
        for(int i=0; i<N; i++){
                cin >> image[i];
        }
        UF uf((N*N)+1);
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                int n1 = node(i, j);
                if(image[i][j]=='1'){
                    for(int k=0; k<8; k++){
                        int x = i+dirX[k];
                        int y = j+dirY[k];
                        if(validate(x, y)){
                            if(image[x][y]=='1'){
                                int n2 = node(x, y);
                                if(!uf.isConnected(n1, n2))
                                    uf.connect(n1, n2);
                            }
                        }
                    }
                }
                else {
                    uf.change_parent(n1);
                }
            }
        }
        cout << "Image number " << ++cases << " contains " << uf.numberofTrees() << " war eagles." << endl;
    }
}
