#include<bits/stdc++.h>
using namespace std;

void print( vector<pair<int,int>> v) {
    vector<pair<int,int>> :: iterator it;
    for(it=v.begin(); it!=v.end();it++) {
        cout<< (*it).first << " " << (*it).second << endl;
    }
    cout<< endl;
}

void pvv(vector<int> &v1) {
    for(int i=0;i<v1.size(); i++){
        cout<< v1[i]<< " ";
    }
    cout<<endl;
}
int main() {
    // vector<pair<int,int>>v;
    // int n;
    // cin>> n;
    // for(int i=0;i<n;i++){
    //     int x, y;
    //     cin>> x >>y;
    //     v.push_back({x,y});
    // }
    //  print(v);

     // vector of Array
     int M;
     cin >> M;
     vector<int> v1[M];
     for(int i=0;i<M;i++){
        int m;
        cin>>m;
        for(int j=0;j<m;j++ ){
            int x;
            cin>>x;
            v1[j].push_back(x);
        }
     }

     for(int i=0;i<M;i++ ){
        pvv(v1[i]);
     }

}