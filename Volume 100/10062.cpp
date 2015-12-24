#include <iostream>
#include <string>
#include <utility>
#include <set>
using namespace std;

int main(){
    string input;
    bool blankline = false;
    while(getline(cin, input)){
        if(blankline){
            cout << endl;
        }
        blankline = true;
        int len = input.length();
        set<char>List;
        for(int i=0; i<len; i++){
            if(input[i]>=32 && input[i]<=127)
                List.insert(input[i]);
        }
        int sizeofset = List.size();
        pair <int, int> output[sizeofset];
        set<char>::iterator it=List.begin();
        int k=0;
        while(it!=List.end()){
            int count = 0;
            for(int i=0; i<len; i++){
                if(*it==input[i]){
                    count++;
                }
            }
            output[k].first = *it++;
            output[k].second = count;
            k++;
        }
        for(int i=0; i<sizeofset; i++){
            for(int j=0; j<sizeofset-1; j++){
                if(output[j].second>output[j+1].second){
                    swap(output[j].second, output[j+1].second);
                    swap(output[j].first, output[j+1].first);
                }
                else if(output[j].second==output[j+1].second){
                    if(output[j].first<output[j+1].first){
                        swap(output[j].second, output[j+1].second);
                        swap(output[j].first, output[j+1].first);
                    }
                }
            }
        }
        for(int i=0; i<sizeofset; i++){
            cout << output[i].first << " " << output[i].second << endl;
        }
    }
    return 0;
}
