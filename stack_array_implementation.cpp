#include <iostream>
using namespace std;
class stack {
    private:
    int size;
    int* arr;
    int here;
    public:
    stack(int size) {
        this->size = size;
        arr = new int[size];
        here = -1;
    }
    void push(int x) {
        if (here<size-1) {
            here++;
            arr[here] = x;
        }
        else {
            cout<<"stack overflow\n";
        }
    }
    void pop() {
        if (here>=0) {
            here--;
        }
        else {
            cout<<"Stack underflow\n";
        }
    }
    int peek() {
        return arr[here];
    }
    void is_empty() {
        if (here<0) {
            cout<<"Stack is empty\n";
        }
        else {
            cout<<"Not empty\n";
        }
    }
    void is_full() {
        if (here>=size) {
            cout<<"Stack is full\n";
        }
        else {
            cout<<"Not full";
        }
    }
    ~stack() {
        delete[] arr;
    }
};
int main() {
    stack s(3);
    return 0;
}