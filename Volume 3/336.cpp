#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
using namespace std;

int source, limit;
map <int, int> mp;
vector <int> graph[64];
int bfs();

int main(){
    //freopen("336.in", "r", stdin);
    int E, cases = 0;
    cin >> E;
    while(E){
        int assign = 1;
        while(E--){
            int n1, n2;
            cin >> n1 >> n2;
            if(mp.find(n1)==mp.end()){
                mp[n1] = assign++;
            }
            if(mp.find(n2)==mp.end()){
                mp[n2] = assign++;
            }
            graph[mp[n1]].push_back(mp[n2]);
            graph[mp[n2]].push_back(mp[n1]);
        }
        int number_of_node = mp.size();
        int src;
        while(cin >> src >> limit){
            if(!src && !limit) break;
            source = mp[src];
            cout << "Case " << ++cases << ": " << number_of_node - bfs() - 1;
            cout << " nodes not reachable from node " << src << " with TTL = " << limit << "." << endl;
        }
        mp.clear();
        for(int i=0; i<64; i++)
            graph[i].clear();
        cin >> E;
    }
    return 0;
}

int bfs(){
    int visited_node_count = 0;
    vector <int> V1, V2;
    bool taken[100] = {false};
    taken[source] = true;
    V1.push_back(source);
    for(int level = 1; level<=limit; level++){
        for(int i=0; i<V1.size(); i++){
            int u = V1[i];
            for(int j=0; j<graph[u].size(); j++){
                int v = graph[u][j];
                if(!taken[v]){
                    V2.push_back(v);
                    taken[v] = true;
                    visited_node_count++;
                }
            }
        }
        if(V2.empty()) break;
        else {
            V1.clear();
            V1 = V2;
            V2.clear();
        }
    }
    return visited_node_count;
}
