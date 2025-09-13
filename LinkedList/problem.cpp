#include<bits/stdc++.h>
using namespace std;

vector<int> fixBook(vector<int> &arr) {
    int n = arr.size();
    int start = -1;
    int end = -1;

    for(int i=0;i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            start = i;
            break;
        }
    }

    if(start == -1) return arr;

    for(int i=n-1;i>0;i--) {
        if(arr[i] < arr[i-1]) {
            end = i;
            break;
        }
    }

    reverse (arr.begin() + start, arr.begin() + end + 1);

    if(is_sorted(arr.begin(), arr.end()))
        return arr;
    else
        return {};
}

int main() {
    vector<vector<int>> input = {
        {1,2,5,4,3,6,7,8,9},
        {5,4,3,6,7,8,9},
        {2,5,3,6,7,8,9},
        {2,5,3,6,7,9,8}
    };
    for(auto &arr: input) {
        auto fix = fixBook(arr);
        if(!fix.empty()) {
            for(int x: fix) cout<< x <<" ";
            cout<<endl;
        } else {
            cout<< "No fix need" <<endl;
        }
    }
    return 0;
}