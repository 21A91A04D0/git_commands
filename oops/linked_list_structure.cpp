#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

//function to print the linked list
void PrintList(Node *head) {
    while(head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

//function to reverse the linked list
Node* reverseLinkedList(Node *head) {
    if(head == NULL || head->next == NULL) return head;
    Node *newHead = reverseLinkedList(head->next);
    Node *front = head->next;
    head->next = NULL;
    front->next = head;
    return newHead;
}

//function to add node at beginning 
Node *insertAtBeginning(Node *temp, int val) {
    Node *nn = new Node(val);
    nn->next = temp;
    return nn;
}


//function to add node at end of the linked list
Node *insertAtEnd(Node *head, int val) {
    Node *temp = head;
    Node *nn = new Node(val);

    if(head == NULL) {
        temp = nn;
    }
    while(head->next) {
        head = head->next;
    }
    head->next = nn;
    return temp;
}
int main() {
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(5);
    Node* six = new Node(6);
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;
    five->next = six;
    six->next = nullptr;

    //insert node at beginning 
    first = insertAtBeginning(first, 0);

    // insert node at end

    first = insertAtEnd(first, 7);
    PrintList(first);
    Node* newHead = reverseLinkedList(first);
    PrintList(newHead);
    return 0;
}