#include <iostream>
#include <string>
#include <utility>
#include <set>
using namespace std;

int main(){
    int N;
    cin >> N;
    pair<string, string>input[N];
    set<string>List;
    int k = 0;
    while(N--){
        cin >> input[k].first;
        getline(cin, input[k].second);
        List.insert(input[k].first);
        k++;
    }
    set<string>::iterator it=List.begin();
    while(it!=List.end()){
        int count = 0;
        for(int i=0; i<k; i++){
            if(*it==input[i].first){
                count++;
            }
        }
        cout << *it++ << " " << count << endl;
    }
    return 0;
}
