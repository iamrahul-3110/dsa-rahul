#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<pair<string, string>, vector<int>> m;
    for(int i=0;i<n;i++){
        string s1,s2;
        int v;
        cin >> s1 >> s2 >> v;
        for(int j=0;j<v;j++){
            int x;
            cin>>x;
            m[{s1,s2}].push_back(x);
        }
    }
    for(auto &itr:m ) {
        auto &full_name = itr.first;
        auto &list = itr.second;
        cout<< full_name.first << " " << full_name.second << " ";
        cout<< list.size() << endl;
        for(auto &op:list){
            cout << op << " ";
        }
        cout<<endl;
    }
}