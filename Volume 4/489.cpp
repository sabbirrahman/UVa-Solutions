#include<string>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)

string input(int chars[]){
    string str;
    char ch;
    while(scanf("%c", &ch) && ch!=' ' && ch!='\n'){
        if(chars[ch-'a']==0){
            str += ch;
            chars[ch-'a']++;
        }
    }
    return str;
}

int main(){
    int N;
    //r("489.in");
    //w("489.out");
    while(scanf("%d", &N) && N!=-1){
        getchar();
        string str1;
        string str2;

        int chars1[26] = {0};
        str1 = input(chars1);
        int chars2[26] = {0};
        str2 = input(chars2);

        int len1 = str1.size();
        int len2 = str2.size();

        int wrong = 0;
        int right = 0;
        bool chicken = true;
        printf("Round %d\n", N);
        for(int i=0; i<len2; i++){
            if(str1.find(str2[i])==str1.npos){
                wrong++;
                if(wrong==7){
                    printf("You lose.\n");
                    chicken = false;
                    break;
                }
            } else {
                right++;
                if(right==len1){
                    printf("You win.\n");
                    chicken = false;
                    break;
                }
            }
        }
        if(chicken) printf("You chickened out.\n");
    }
    return 0;
}
