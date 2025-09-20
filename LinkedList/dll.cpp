#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* back;
    
        Node(int data1) {
            data = data1;
            next = nullptr;
            back = nullptr;
        }

        Node(int data1, Node* next1, Node* back1) {
            data = data1;
            next = next1;
            back = back1;
        }
};

Node* convertToDll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++) {
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }

    return head;
}

void printDll(Node* head) {
    while(head) {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}

// Deletion-
// deletion from head
Node* removeHead(Node* head) {
    if(head == NULL) return NULL;
    Node* prev = head;
    head = head->next;
    head->back = nullptr; // delete the head back address;
    prev->next = nullptr; // delete the prev next address;
    delete prev;
    return head;
}

// deletion of tail of Dll
Node* removeTail(Node* head) {
    if(head == NULL) return NULL;
    if(head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    // while(temp->next->next != NULL) {
    //     temp = temp->next;
    // }
    // temp->next->back = nullptr;
    // delete temp->next;
    // temp->next=nullptr;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* prev = temp->back;
    prev->next = nullptr;
    delete temp;

    return head;
}

// deletion of Kth element
Node* removeByPosition(Node* head, int k) {
    if(head == NULL) return NULL;
    if(k==1) {
        Node* temp = head;
        head = head -> next;
        if(head) {
            head->back = nullptr;
        }
        delete temp;
        return NULL;
    } 
    Node* temp = head;
    int count = 1;
    while(temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }
    if(temp == NULL) return head; // k is out of bound
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev) prev->next = front;
    if(front) front->back = prev;
    delete temp;
    return head;
}


int main() {
    int t;
    cin>>t;
    vector<int> arr;
    for(int i=0;i<t;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    Node* head = convertToDll(arr);

    // head = removeHead(head);
    // head = removeTail(head);
    head = removeByPosition(head,3);
    printDll(head);
    return 0;
}