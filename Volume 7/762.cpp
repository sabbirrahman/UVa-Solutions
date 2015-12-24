#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
using namespace std;

vector <int> graph[10001];
vector <int> parent;
vector <int> path;
map <string, int> mp;
map <int, string> mp2;

bool bfs(int src, int dst);
void find_path(int r);

int main(){
    //freopen("762.in", "r", stdin);
    //freopen("762.out", "w", stdout);
    bool first = true;
    int n;
    while(cin >> n){
        parent.resize(10001);
        if(!first) cout << endl;
        first = false;
        int assign = 0;
        string city1, city2;
        for(int i=0; i<n; i++){
            cin >> city1 >> city2;
            if(mp.find(city1)==mp.end()){
                mp[city1] = ++assign;
                mp2[mp[city1]] = city1;
            }
            if(mp.find(city2)==mp.end()){
                mp[city2] = ++assign;
                mp2[mp[city2]] = city2;
            }
            graph[mp[city1]].push_back(mp[city2]);
            graph[mp[city2]].push_back(mp[city1]);
        }
        cin >> city1 >> city2;
        if(city1==city2){
        }
        else if(mp.find(city1)==mp.end() || mp.find(city2)==mp.end()){
            cout << "No route" << endl;
        }
        else if(bfs(mp[city1], mp[city2])){
            find_path(mp[city2]);
            reverse(path.begin(), path.end());
            for(int i=0; i<path.size()-1; i++){
                cout << mp2[path[i]] << " " << mp2[path[i+1]] << endl;
            }
        }
        else {
            cout << "No route" << endl;
        }
        mp.clear();
        mp2.clear();
        path.clear();
        parent.clear();
        for(int i=0; i<=assign; i++){
            graph[i].clear();
        }
    }
    return 0;
}

bool bfs(int src, int dst){
    queue <int> Q;
    bool taken[10001] = {false};
    Q.push(src);
    taken[src] = true;
    while(!Q.empty()){
        int u = Q.front();
        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i];
            if(!taken[v]){
                Q.push(v);
                taken[v] = true;
                parent[v] = u;
                if(v==dst) return true;
            }
        }
        Q.pop();
    }
    return false;
}

void find_path(int r){
    if(parent[r]==r) return;
    else {
        path.push_back(r);
        find_path(parent[r]);
    }
}
