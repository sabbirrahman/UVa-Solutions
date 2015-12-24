#include <iostream>
#include <sstream>
#include <vector>
#include <cstdio>
#include <queue>
using namespace std;

vector <int> graph[22];
int bfs(int src, int dest);
void process_line(string str, int i);

int main(){
    //freopen("567.in", "r", stdin);
    //freopen("567.out", "w", stdout);
    int cases = 0;
    string line;
    while(getline(cin, line)){
        process_line(line, 1);
        string inp;
        for(int country=2; country<20; country++){
            getline(cin, inp);
            process_line(inp, country);
        }
        int n;
        cin >> n;
        printf("Test Set #%d\n", ++cases);
        while(n--){
            int a, b, c, d;
            cin >> a >> b;
            if(a>b){
                c = b; d = a;
            }
            else {
                c = a; d = b;
            }
            printf("%2d to %2d: %d\n", a, b, bfs(c, d));
        }
        printf("\n");
        for(int i=0; i<22; i++) graph[i].clear();
        getchar();
    }
    return 0;
}

int bfs(int src, int dest){
    queue<int>Q;
    Q.push(src);
    bool taken[100]={false};
    int distance[100]={0};
    taken[src]=true;
    distance[src]=0;
    while(!Q.empty()){
        int u = Q.front();
        for(int i=0; i<graph[u].size(); i++){
            int v = graph[u][i];
            if(!taken[v]){
                distance[v] = distance[u] + 1;
                taken[v] = true;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return distance[dest];
}

void process_line(string str, int i){
    stringstream stream(str);
    queue <int> V;
    int num;
    while(stream >> num){
        V.push(num);
    }
    V.pop();
    while(!V.empty()){
        graph[i].push_back(V.front());
        graph[V.front()].push_back(i);
        V.pop();
    }
}
