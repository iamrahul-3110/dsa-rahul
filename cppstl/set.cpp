#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
    cout<< endl;

    for(auto it=s.begin(); it!=s.end();it++){
        cout<< *it <<endl;
    }
}

int main() {
    set<string> s; // log(n)
    s.insert("abc");
    s.insert("ihfi");
    s.insert("ajkf");
    s.find("abc");
    auto it = s.find("ajkf"); // log(n)

    if(it != s.end())
        s.erase(it);

    cout<<endl;
    print(s);
}