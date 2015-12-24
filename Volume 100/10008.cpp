#include <iostream>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

struct character {
    char ch;
    int count;
    character(char a, int b){ ch = a; count = b; }
    bool operator < (const character& chars) const {
        if(count<chars.count) return true;
        else if(count==chars.count && ch>chars.ch) return true;
        else return false;
    }
};

int main(){
    //r("10008.in");
    //w("10008.out");
    getchar();
    getchar();
    char ch;
    int ASCII[26] = {0};
    priority_queue <character> Q;
    
    while(scanf("%c", &ch)!=EOF){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            if(ch>='a' && ch<='z') ch-=32;
            ASCII[ch-'A']++;
        }
    }

    for(int i=0; i<26; i++){
        if(ASCII[i]) Q.push(character(i+'A', ASCII[i]));
    }

    while(!Q.empty()){
        character ans = Q.top();
        printf("%c %d\n", ans.ch, ans.count);
        Q.pop();
    }
    
    return 0;
}
