#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    //freopen("11588.in", "r", stdin);
    //freopen("11588.out", "w", stdout);
    int T;
    cin >> T;
    for(int cas=1; cas<=T; cas++){
        int R, C, M, N;
        cin >> R >> C >> M >> N;
        string imageGrid[R];
        for(int i=0; i<R; i++) cin  >> imageGrid[i];
        vector<int>ASCII(26, 0);
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                ASCII[imageGrid[i][j]-'A']++;
            }
        }
        sort(ASCII.rbegin(), ASCII.rend());
        int sum = 0;
        for(int i=0; i<26; i++){
            sum += (ASCII[0]==ASCII[i]) ? (M * ASCII[i]) : (N * ASCII[i]);
        }
        cout << "Case " << cas << ": " << sum << endl;
    }
    return 0;
}
