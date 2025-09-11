#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    public:
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* convertArraytoLL(vector<int> &v) {
    Node* head = new Node(v[0]);
    Node* current = head;
    cout<< current <<" " <<current->data <<" " <<endl; // initially current -> next is 0
    for(int i=1;i<v.size();i++) {
        Node* temp = new Node(v[i]);
        current-> next = temp;  //  we are moving current to temp and assigning current -> next , temp address
        current = current->next;
        cout<< current <<" " <<current->data <<" " <<endl;
    }
    return head;
}

int main() {
    vector<int> v = {2,1,3,8};

    Node* head = convertArraytoLL(v);
    // traverse
    Node* temp = head;
    int length = 0;
    while(temp) {
        cout<< temp->data<< " ";
        temp = temp->next;
        length++;
    }
    cout<<endl;
    cout<<length;
}