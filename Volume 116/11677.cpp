#include <iostream>
using namespace std;
int main(){
    int h1, m1, h2, m2;
    while(cin>>h1>>m1>>h2>>m2){
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;
        int h = h2-h1;
        int m = m2-m1;
        if(h<0&&m<0){
            h += 23;
            m += 60;
            cout << h*60+m << endl;
        }
        else if(m<0&&h==0){
            h += 24;
            cout << h*60+m << endl;
        }
        else if(h<0){
            h += 24;
            cout << h*60+m << endl;
        }
        else if(m<0){
            m += 60;
            h -= 1;
            cout << h*60+m << endl;
        }
        else {
            cout << h*60+m << endl;
        }
    }
    return 0;
}
