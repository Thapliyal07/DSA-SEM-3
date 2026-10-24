#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
class Stack {
    public:
    Node* head;
    Stack () {
        head = NULL;
    }
    void push(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = newnode;
            return;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
    }
    void pop() {
        if (head == NULL) {
            cout<<"Error -- Empty Stack";
            return;
        }
        else {
            Node* temp = head;
            head = head->next;
            delete temp;
            temp = NULL;
            return;
        }
    }
    int peek() {
        if (head != NULL) {
            return head->data;
        }
        else {
            cout<<"Error -- empty stack\n";
            return -1;
        }
    }
    bool is_empty() {
        return (head == NULL);
    }
};
int main() {
    Stack s;
    cout<<s.peek();
    return 0;
}