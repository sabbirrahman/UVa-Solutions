#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <queue>
using namespace std;

#define mx 20
#define ms(a, b) memset(a, b, sizeof a)

vector <int> G[mx], C[mx], P, path;

int dijkstra(int src, int dst);
void find_path(int r);

struct node {
    int n, w;
    node(int a, int b) { n=a; w=b; }
    bool operator < (const node& p) const { return w > p.w; }
};

int main(){
    //freopen("341.in", "r", stdin);
    //freopen("341.out", "w", stdout);
    int N, cases = 0;
    while(cin >> N && N!=0){
        P.resize(N+1);
        for(int i=1; i<=N; i++){
            int E;
            cin >> E;
            while(E--){
                int n, w;
                cin >> n >> w;
                G[i].push_back(n);
                C[i].push_back(w);
            }
        }
        int s, d;
        cin >> s >> d;
        int delay = dijkstra(s, d);
        find_path(d);
        reverse(path.begin(), path.end());
        cout << "Case " << ++cases << ": Path =";
        for(vector<int>::iterator it=path.begin(); it!=path.end(); it++){
            cout << " " << *it;
        }
        cout << "; " << delay << " second delay" << endl;
        for(int i=0; i<=mx; i++){
            G[i].clear();
            C[i].clear();
        }
        P.clear();
        path.clear();
    }
    return 0;
}

int dijkstra(int src, int dst){
    priority_queue <node> Q;
    int D[mx];
    ms(D, 63);
    Q.push(node(src, 0));
    D[src] = 0;
    while(!Q.empty()){
        node top = Q.top();
        Q.pop();
        int u = top.n;
        if(u == dst) return D[dst];
        for(int i=0; i<(int)G[u].size(); i++){
            int v = G[u][i];
            if(D[u]+C[u][i]<D[v]){
                D[v] = D[u] + C[u][i];
                P[v] = u;
                Q.push(node(v, D[v]));
            }
        }
    }
    return -1;
}

void find_path(int r){
    if(P[r]==r) return;
    else {
        path.push_back(r);
        find_path(P[r]);
    }
}
