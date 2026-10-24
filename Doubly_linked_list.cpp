#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        next = prev = NULL;
    }
};
class DoublyLinked {
    Node* head;
    Node* tail;
public:
    DoublyLinked() {
        head = tail = NULL;
    }
    void push_front(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
        }
        else {
            newnode->next = head;
            newnode->prev = NULL;
            head->prev = newnode;
            head = newnode;
        }      
    }
    void push_back(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;            
        }
        else{
            tail->next = newnode;
            newnode->next = NULL;
            newnode->prev = tail;
            tail = newnode;
        }
    }
    void pop_front() {
        if (head == NULL) {
            return;
        }
        else if (head==tail) {
            Node* temp = head;
            head = tail = NULL;
            delete temp;
            return;
        }
        else {
            Node* temp = head;
            head = head->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
    
    void show() {
        Node* temp = head;
        while (temp != NULL) {
            cout<< temp->data << "<=>";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
//creating a push_front(int val);
int main() {
    DoublyLinked dbl;
    dbl.push_front(1);
    dbl.push_front(2);
    dbl.push_front(3);
    dbl.push_back(0);
    dbl.show();
    dbl.pop_front();
    dbl.show();
    return 0;
}