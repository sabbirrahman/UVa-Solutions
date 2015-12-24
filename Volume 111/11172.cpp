#include <iostream>
using namespace std;

int main(){
    int T, a, b;
    cin>>T;

    while(T--){
        cin>>a>>b;
        if(!(a^b))
            cout<<"="<<endl;
            else if(a>b)
                cout<<">"<<endl;
                else
                cout<<"<"<<endl;
    }
    return 0;
}
