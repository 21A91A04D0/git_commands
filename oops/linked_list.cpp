#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int x) : data(x),next(nullptr) {}

};

void PrintList(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node * three = new Node(3);
    Node *four = new Node(4);
    Node *five = new Node(5);
    first->next = second;
    second->next = three;
    three->next = four;
    four->next = five;
    PrintList(first);
}