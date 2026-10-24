//valid paranthesis problem (stack)
#include <iostream>
#include <string>
using namespace std;
class Node {
    public:
    string data;
    Node* next;
    Node(string val) {
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
    void push(string val) {
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
    string peek() {
        if (head != NULL) {
            return head->data;
        }
        else {
            return "Error -- empty stack";
        }
    }
    bool is_empty() {
        return (head == NULL);
    }
};
int get_position(string equation, int pos) {
        while ((pos<equation.length())&&(equation[pos] != '(' && equation[pos] != ')' && equation[pos] != '[' && equation[pos] != ']' && equation[pos] != '{' && equation[pos] != '}')) {
            pos++;
        }
        return pos;
        
}
int main() {
    //entering the equation
    Stack s;
    string equation;
    cout<<"Enter equation: ";
    cin>>equation;
    int pos = 0;
    while (pos<equation.length()) {
        pos = get_position(equation, pos);        
        if (equation[pos] == '(' || equation[pos] == '{' || equation[pos] == '[') {
            s.push(string(1, equation[pos]));
            pos++;
        }
        if (equation[pos] == ')' || equation[pos] == '}' || equation[pos] == ']') {
            if ((equation[pos] == ')' && s.peek() == "(") || (equation[pos] == '}' && s.peek() == "{") || (equation[pos] == ']' && s.peek() == "[")) {
                s.pop();
            }
            else {
                break;
            }
            pos++;
        }
    }
    if (pos != equation.length()) {
        cout<<"Invalid equation";
    }
    else {
        if (s.is_empty()) {
        cout<<"Correct equation";
        }
        else {
         cout<<"incorrect equation";
        }
    }
    return 0;
}