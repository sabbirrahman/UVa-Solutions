#include <iostream>
#include <string>
using namespace std;

int main(){
    int s;
    string n;
    while(cin >> s >> n){
        if(!s && n=="0") break;
        int len = n.length();
        int row = (2*s)+3;
        int col = s+2;
        for(int i=0; i<row; i++){
            for(int k=0; k<len; k++){
                if(n[k]=='1'){
                    for(int j=0; j<col; j++){
                        if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='2'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==col-1 && i!=0 && i<row/2) cout << "|";
                        else if(j==0 && i!=row-1 && i>row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='3'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='4'){
                    for(int j=0; j<col; j++){
                        if((i!=0 && i==row/2 && i!=row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else if(j==0 && i!=0 && i<row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='5'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==0 && i!=0 && i<row/2) cout << "|";
                        else if(j==col-1 && i!=row-1 && i>row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='6'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==0 && i!=0 && i!=row/2 && i!=row-1) cout << "|";
                        else if(j==col-1 && i!=row-1 && i>row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='7'){
                    for(int j=0; j<col; j++){
                        if(i==0 && j!=0 && j!=col-1) cout << "-";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='8'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==0 && i!=0 && i!=row/2 && i!=row-1) cout << "|";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='9'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row/2 || i==row-1) && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else if(j==0 && i!=0 && i<row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
                else if(n[k]=='0'){
                    for(int j=0; j<col; j++){
                        if((i==0 || i==row-1) && i!=row/2 && (j!=0 && j!=col-1)) cout << "-";
                        else if(j==0 && i!=0 && i!=row/2 && i!=row-1) cout << "|";
                        else if(j==col-1 && i!=0 && i!=row-1 && i!=row/2) cout << "|";
                        else cout << " ";
                    }
                    if(k!=len-1) cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
