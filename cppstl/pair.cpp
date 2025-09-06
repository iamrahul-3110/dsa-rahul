#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;
    p = make_pair(3, "rahul");
    cout << p.first << " " << p.second <<endl;

    p = {4, "abcd"};
    cout << p.first << " " << p.second <<endl;

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(const pair<int, int>& i : p_array) {
        cout << i.first << " " << i.second << endl;
    }
} 