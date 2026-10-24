//Creating queue using linked list
#include <iostream>
using namespace std;
class Node {
    public:
    Node* next;
    int data;
    Node (int val) {
        data = val;
        next = NULL;
    }
};
class Queue {
    Node* front;
    Node* rear;
    public:
    Queue () {
        front = rear = NULL;
    }
    void Enqueue (int val) {
        Node* newnode = new Node(val);
        if (rear==NULL) {
            rear = front = newnode;
        }
        else {
            rear->next = newnode;
            rear = rear->next;
        }
    }
    void Dequeue() {
        if (front == NULL) {
            cout<<"Error -- Empty queue\n";
            return;
        }
        else if (front == rear) {
            Node* temp = front;
            front = rear = NULL;
            delete temp;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    Node* get_front() {
        return front;
    }
    Node* get_back() {
        return rear;
    }
    bool empty() {
        if (front == NULL) {
            return true;
        }
        else {
            return false;
        }
    }
    int count() {
        if (front == NULL) return 0;
        
        Node* temp = front;
        int c = 1;
        while (temp->next != NULL) {
            c++;
            temp = temp->next;
        }
        return c;
    }
};
int main() {
    Queue q;
    q.Enqueue(7);
    q.Enqueue(3);
    q.Enqueue(5);
    cout<< q.get_front()->data<<"\n";
    cout<< q.count()<<"\n";
    q.Dequeue();
    cout<< q.get_front()->data<<"\n";
    q.Dequeue();
    cout<< q.get_front()->data<<"\n";
    q.Dequeue();
    q.Dequeue();
    cout<<q.empty()<<"\n";
    q.Enqueue(3);
    cout<<q.empty();
    
    return 0;
}