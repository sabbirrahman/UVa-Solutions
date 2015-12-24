#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    string hbd[] = { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
    string name[N];
    for(int i=0; i<N; i++){
        cin >> name[i];
    }
    bool done = false;
    int i=0, j=0;
    while(1){
        if(i==N){ i = 0; done = true; }
        if(done && j==16) break;
        if(j==16) j = 0;
        cout << name[i] << ": " << hbd[j] << endl;
        i++;
        j++;
    }
    return 0;
}
