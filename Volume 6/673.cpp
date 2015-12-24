#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

int main(){
    //freopen("673.in", "r", stdin);
    //freopen("673.out", "w", stdout);
    int n;
    cin >> n;
    getchar();
    while(n--){
        string inp;
        getline(cin, inp);
        if(inp.empty()){
            cout << "Yes" << endl;
            continue;
        }
        int len = inp.size();
        stack <char> st;
        for(int i=0; i<len; i++){
            if(inp[i]=='(' || inp[i]=='['){
                st.push(inp[i]);
            }
            else if(inp[i]==')'){
                if(!st.empty()){
                    if(st.top()=='('){
                        st.pop();
                    }
                    else st.push(inp[i]);
                }
                else st.push(inp[i]);
            }
            else if(inp[i]==']'){
                if(!st.empty()){
                    if(st.top()=='['){
                        st.pop();
                    }
                    else st.push(inp[i]);
                }
                else st.push(inp[i]);
            }
        }
        if(st.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
