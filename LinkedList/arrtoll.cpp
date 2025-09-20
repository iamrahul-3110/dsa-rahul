#include<bits/stdc++.h>
using namespace std;

// creation of node
class Node {
    public:
        int data;
        Node* next;

    public:
        Node(int data1 , Node* next1) {
            data = data1;
            next = next1;
        }
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

// conversion
Node* convertArraytoLL(vector<int> &v) {
    Node* head = new Node(v[0]);
    Node* current = head;
    cout<< current <<" " <<current->data <<" " <<endl; // initially current -> next is 0
    for(int i=1;i<v.size();i++) {
        Node* temp = new Node(v[i]);
        current-> next = temp;  //  we are moving current to temp and assigning current -> next , temp address
        current = temp; // or current = temp
        cout<< current <<" " <<current->data <<" " <<endl;
    }
    return head;
}

// Deletion from head
Node* removeHead(Node* head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next; // just move the head to the next location.
    free(temp); // free the memory
    return head;
}

// delete the tail of ll
Node* removeTail(Node* head) {
    if(head == NULL || head->next == NULL) 
        return NULL;
    
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    // free(temp->next);
    delete temp->next; // delete the last node
    temp->next=nullptr; // assign null to the last 2nd node
    return head;
}

// delete from the kth position
Node* removeNodePosition (Node* head, int k) {
    if(head == NULL) return NULL; // Iff LL is null
    if(k==1) { // if the position is one
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node* temp = head;
    Node* prev = nullptr; // move team and assign to prev
    while(temp) {
        count++;
        if(count==k) {
            prev->next = prev->next->next; // jumping (. and -> is the same)
            free(temp); // removing
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

// remove by the element
Node* removeNodeElement (Node* head, int k) {
    if(head == NULL) return NULL; // Iff LL is null
    if(head->data == k) { // if the position is one
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL; // move team and assign to prev
    while(temp) {
        if(temp->data == k) {
            prev->next = prev->next->next; // jumping (. and -> is the same)
            free(temp); // removing
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

// insert an element
Node* insertFromHead(Node* head, int n) {
    Node* temp = new Node(n,head);
    // temp->next = head; 
    return temp;
}

// insert at the tail
Node* insertToTail(Node* head, int n) {
    if(head==NULL) return new Node(n);
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node* node = new Node(n);
    temp->next = node;
    return head;
}

// insert at the given position
Node* insertToPosition(Node* head, int n, int k) {
    if(head == NULL) {
        if(k==1)
            return new Node(n);
        else return NULL;
    }
    if(k==1) {
        Node* temp = new Node(n,head);
        return temp;
    }
    int count = 0;
    Node* temp = head;
    while(temp) {
        count++;
        if(count == k-1) {
            Node* newNode = new Node(n);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}

// insert a value before a given value
Node* insertBeforeValue(Node* head, int n, int k) {
    if(head == NULL) {
        return NULL;
    }
    if(k == head->data) {
        return new Node(n,head);
    }
    Node* temp = head;
    while(temp->next != NULL) {
        if(temp->next->data == k) {
            Node* newNode = new Node(n, temp->next);
            temp->next = newNode;
            break;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}

// printing
void printHead(Node* head) {
    while(head) {
        cout<< head->data<< " ";
        head= head->next;
    }
    cout<<endl;
}


 // main method
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

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
    cout<< endl;

    // head = removeHead(head); // deletion from head
    // head = removeTail(head); // from tail
    // head = removeNodePosition(head, 1); // by position
    // head = removeNodeElement(head, 6); // by element

    // head = insertFromHead(head, 8);
    // head = insertToTail(head,8);
    // head = insertToPosition(head, 5, 4);
    // head = insertBeforeValue(head, 12, 2);
    printHead(head);
}