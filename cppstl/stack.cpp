#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(3);
    s.push(6);
    s.push(5);
    // LIFO
    while(!s.empty()) {
        cout<< s.top() <<endl;
        s.pop();
    }

    // FIFO
    queue<string> q;
    q.push("Rahul");
    q.push("Kimmi");
    q.push("Aditya");
    q.push("Sattu");

    while(!q.empty()) {
        cout<< q.front() << endl;
        q.pop();
    }

}