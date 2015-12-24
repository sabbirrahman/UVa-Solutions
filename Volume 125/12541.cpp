/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;

#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define Sort(v) sort(v.begin(),v.end())

struct Date {
    string name;
    int day;
    int month;
    int year;
    Date(string n, int d, int m, int y){
        name  = n;
        day   = d;
        month = m;
        year  = y;
    }
    bool operator < (const Date& d) const {
        if(year>d.year) return true;
        if(year==d.year && month>d.month) return true;
        if(year==d.year && month==d.month && day>d.day) return true;
        else return false;
    }
};

int main(){
    ios::sync_with_stdio(false);
    //r("12541.in");
    //w("12541.out");
    int T;
    cin >> T;
    vector <Date> Q;
    while(T--){
        string n;
        int d, m, y;
        cin >> n >> d >> m >> y;
        Q.push_back(Date(n, d, m, y));
    }
    Sort(Q);
    cout << Q.front().name << endl;
    cout << Q.back().name << endl;
    return 0;
}
