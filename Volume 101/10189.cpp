#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, M, i=0;
    bool blankline = false;
    while(cin >> N >> M){
        if(!N && !M) break;
        if(blankline){
            cout << endl;
        }
        string field[N];

        for(int i=0; i<N; i++){
            cin >> field[i];
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(field[i][j]!='*'){
                    field[i][j]='0';
                }
            }
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(field[i][j]=='*'){
                    if(i!=0 && j!=0 && field[i-1][j-1]!='*') field[i-1][j-1]++;
                    if(i!=0 && field[i-1][j]!='*') field[i-1][j]++;
                    if(i!=0 && j!=M-1 && field[i-1][j+1]!='*') field[i-1][j+1]++;
                    if(j!=0 && field[i][j-1]!='*') field[i][j-1]++;
                    if(j!=M-1 && field[i][j+1]!='*') field[i][j+1]++;
                    if(i!=N-1 && j!=0 && field[i+1][j-1]!='*') field[i+1][j-1]++;
                    if(i!=N-1 && field[i+1][j]!='*') field[i+1][j]++;
                    if(i!=N-1 && j!=M-1 && field[i+1][j+1]!='*') field[i+1][j+1]++;
                }
            }
        }
        cout << "Field #" << ++i << ":" << endl;
        for(int i=0; i<N; i++){
            cout << field[i] << endl;
        }
        blankline = true;
    }
    return 0;
}
