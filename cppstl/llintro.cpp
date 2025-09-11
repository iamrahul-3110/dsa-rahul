#include<bits/stdc++.h>
using namespace std;

struct Node {
    public:
        int data;
        Node* next;
    public:
        Node(int data, Node* next) {
            data=data;
            next=next;
        }
};

int main() {
    vector<int> arr = {3,5,6,3,6};
    Node* y = new Node(arr[0], nullptr);
    cout << y;
}