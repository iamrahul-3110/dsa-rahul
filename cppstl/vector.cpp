#include<bits/stdc++.h>
using namespace std;

void printVec (vector<int>v) {
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a[10]; // size limit
    vector<int> v; // dynamic sizing
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    vector<int> v2 = v;
    v2.push_back(1);
    v2.push_back(2);
    vector<int> :: iterator it2;
    for(it2=v2.begin(); it2!=v2.end(); it2++) {
        cout<<*it2<<" ";
    }
    cout<<endl;

    vector<int> &v3 = v;
    vector<int> :: iterator it3;
    for(it3=v3.begin(); it3!=v3.end(); it3++) {
        cout<<*it3<<" ";
    }
    v3.push_back(1);
    cout<<endl;
    printVec(v);
}