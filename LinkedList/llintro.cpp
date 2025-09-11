#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    public:
        Node(int data1, Node* next1) { // constructor
            data=data1;
            next=next1;
        }
// consturctor
        Node(int data1){
            data = data1;
            next = nullptr;
        }
}
Node* convertArraytoLL(vector<int> arr) {
    Node* head = new (Node(arr[0]));
    Node* mover = head;
    for(int i = 1; i<arr.size();i++) {
        mover->next = new Node(arr[i]);
        mover = mover->next;
    } 
    return head;
}
int main() {
    vector<int> arr = {3,5,6,3,6};

    Node* head = convertArraytoLL(arr);
    cout<< head->data;
}