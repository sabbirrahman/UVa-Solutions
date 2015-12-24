#include <iostream>
using namespace std;
int main(){
    int N;
    string str1, str2;
    cin >> N;
    while(N--){
        cin >> str1;
        cin >> str2;
        int len1 = str1.length();
        int len2 = str2.length();
        if(str1==str2){
            cout << "Yes" << endl;
        }
        else if(len1!=len2){
            cout << "No" << endl;
        }
        else{
            bool abc = true;
            for(int i=0; i<len1; i++){
                if(str2[i]==str1[i])
                    continue;
                else if((str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')&&
                        (str2[i]=='a'||str2[i]=='e'||str2[i]=='i'||str2[i]=='o'||str2[i]=='u')){
                    continue;
                }
                else{
                    abc = false;
                    break;
                }
            }
            if(abc)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
