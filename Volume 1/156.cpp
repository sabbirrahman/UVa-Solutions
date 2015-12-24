/*
	Md. Sabbir Rahman
	Department of Computer Science & Engineering
	Uttara University, Bangladesh
*/
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<set>
#include<map>
using namespace std;

#define ft first
#define se second
#define r(input) freopen(input, "r", stdin)
#define w(output) freopen(output, "w", stdout)
#define Sort(v) sort(v.begin(),v.end())

int main(){
    ios::sync_with_stdio(false);
    //r("156.in");
    //w("156.out");
    string word;
    map <string, pair <string, int> > words;
    map <string, pair <string, int> >::iterator it;
    set <string> output;
    set <string>::iterator itt;
    while(cin >> word && word!="#"){
        string oword = word;
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        Sort(word);
        if(words.find(word)==words.end()) {
            pair<string, int> p;
            p.ft = oword;
            p.se = 0;
            words[word] = p;
        } else {
            words[word].se++;
        }
    }
    for(it=words.begin(); it!=words.end(); it++){
        if(it->se.se == 0){
            output.insert(it->se.ft);
        }
    }
    for(itt=output.begin(); itt!=output.end(); itt++){
        cout << *itt << endl;
    }
    return 0;
}
