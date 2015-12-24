#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool square(int a[]);
bool rectangle(int a[]);
bool quadrangle(int a[]);
int main(){
    int T, arr[4];
    cin>>T;
    while(T--){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        sort(arr, arr+4);
        if(square(arr))
            cout<<"square"<<endl;
            else if(rectangle(arr))
                cout<<"rectangle"<<endl;
                else if(quadrangle(arr))
                    cout<<"quadrangle"<<endl;
                    else
                        cout<<"banana"<<endl;
    }
    return 0;
}
bool square(int a[]){
    if(a[0]==a[1])
        if(a[1]==a[2])
            if(a[2]==a[3])
                return true;

    return false;
}
bool rectangle(int a[]){
    if(a[0]==a[1])
        if(a[2]==a[3])
            return true;
    return false;
}
bool quadrangle(int a[]){
    if((a[0]+a[1]+a[2])>a[3])
        return true;
    return false;
}
