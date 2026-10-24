//Circular queue using arrays
//Note: use count variable, it makes the code easy.
//enqueue, dequeue, front, empty
#include <iostream>
using namespace std;
class Queue {
    int* arr;
    int size;
    int front = 0;
    int rear=0;
    public:
    Queue (int size) {
        this->size = size;
        arr = new int[size];
    }
    void enqueue(int val) {
        if ((rear>front) &&(rear-front)%size==0) { //this means that the queue is full
            cout<<"Queue is Full\n";
            return;
        }
        else {
            arr[rear%size] = val;
            rear++;
            return;
        }
    }
    void dequeue() {
        if (front == rear) {
            cout<<"Empty Queue\n";
            return;
        }
        else {
            front++;
        }
    }
    int get_front() {
        if (front==rear) {
            //empty queue
            cout<<"Empty: -1 will be returned\n";
            return -1;
        }
        else {
            return arr[front%size];
        }
    }
    bool empty() {
        if (front == rear) return true;
        else return false;
    }
    ~Queue() {
        delete[] arr;
    }
};
int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    cout<<q.get_front()<<"\n";
    q.dequeue();
    cout<<q.get_front()<<"\n";
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.get_front()<<"\n";
    q.enqueue(6);
    q.enqueue(7);
    cout<<q.empty()<<"\n";
    return 0;
}