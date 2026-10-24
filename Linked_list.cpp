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
    Node() {
        next = NULL;
    }
};
class List {
    Node* head;
    Node* tail;
    public:
    List() {
        head = tail = NULL;
    }
    void push_front(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
            return;           
        }
        newnode->next = head;
        head = newnode;
        return;
    }
    void push_back(int val) {
        Node* newnode = new Node(val);
        if (head == NULL) {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
        return;
    }
    void pop_front() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    void pop_back() {
        if (head == NULL) {
            return;
        }
        if (head == tail) {
            delete head;
            head = tail =  NULL;
            return;
        }
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        tail = temp;
        delete tail->next;
        tail->next = NULL;
    }
    void insert(int val, int pos) {
        if (head == NULL) {
            return;
        }
        Node* newnode = new Node(val);
        Node* temp = head;
        int i = 1;
        //suppose pos = 3; temp is at pos = 1;
        while (i<pos-1) {
            if (temp == NULL) {
                cout<<"invalid position";
                return;
            }
            i++;
            temp = temp->next;
        }
            newnode->next = temp->next;
            temp->next = newnode;
            return;
    }
    void show() {
        Node* temp = head;
        while (temp!=NULL) {
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }
};
int main() {
    List l1;
    l1.push_front(1);
    l1.push_back(3);
    l1.insert(2, 2);
    l1.pop_back();
    l1.show();
}