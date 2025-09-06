#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "rahul";

    m.insert({3,"Satyam"});  // O(log n)
    m[2];

    m[2] = "Aditya";

    map<int, string> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout<< it -> first << " " << it -> second <<endl;
    }
    cout<<endl;
    for(auto value:m){  // nlog(n) time 
        cout<< value.first <<" "<<value.second <<endl;
    }

    m.erase(3);
    cout<<endl;
    auto it1 = m.find(3); //iterator initialization
    if(it1 == m.end()) {
      f  cout<< " no value ";
    }
    else{
        cout<< it1->first << " " << it1-> second<<endl;
    }
}