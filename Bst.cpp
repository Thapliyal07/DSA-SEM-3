//BINARY SEARCH TREE
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
    Node* return_head() {
        return head; 
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

class node {
    public:
    int data;
    node* right;
    node* left;
    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node* create (int val) {
    node* newnode = new node(val);
    return newnode;
}
node* binary_search(node* b, int key) {
    if (b == NULL){
        cout<<"not found\n";
        return NULL;
    }
    if (b->data == key) {
        return b;
    }
    if (b->left != NULL && b->data>key) {
        binary_search(b->left, key);
    }
    if (b->right != NULL && b->data < key) {
        binary_search(b->right, key);
    }
    //if none of the statements above executed
    return NULL;
}
void insert(node* b, int val) {
    node* newnode = create(val);
    if (b == NULL) {
        b = newnode;
        return;
    }
    if (val< b->data) {
        if (b->left == NULL) {
            b->left = create(val);
            return;
        }
        else {
            insert(b->left, val);
            return;
        }
    }
    else if (val> b->data) {
        if (b->right == NULL) {
            b->right = create(val);
            return;
        }
        else {
            insert(b->right, val);
            return;
        }
    } 
};

//node is of binary search tree and Node is of linked list
node* create_binary_search_tree(Node* listhead) {
    node* root = new node(listhead->data);\
    Node* temp = listhead->next;
    while (temp != NULL) {
        insert(root, temp->data);
        temp = temp->next;        
    }
    return root;
};
void inorder_display(node* root) {
    if (root == NULL) return;
    inorder_display(root->left);
    cout<<root->data<<" ";
    inorder_display(root->right);
}
node* find_max(node* root) {
    if (root == NULL) {
        return NULL;
    }
    if (root->right == NULL) {
        return root;
    }
    return find_max(root->right);
}
node* remove(node* root, int key) {
    if (root == NULL) {
        cout<<"Key not found";
        return NULL;
    }
    //case-1: if root node is to be deleted
    if (root->data == key) {
        //if no leaf node
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        //if only one side present
        else if (root->right == NULL && root->left != NULL) {
            node* temp = root;
            root = root->left;
            delete temp;
            temp = NULL;
            return root;
        }
        else if (root->right != NULL && root->left == NULL) {
            node* temp = root;
            root = root->right;
            delete temp;
            temp = NULL;
            return root;
        }
        //if both sides present: replace root node with maximum valued left side node and delete that node
        else {
            node* temp2 = find_max(root->left);
            root->data = temp2->data;
            root->left = remove(root->left, temp2->data);
            return root;
            //this means we are using remove function on the maximum node after copying it on the root node which was to be removed
        }

    }
    else if (key < root->data) {
        root->left = remove(root->left, key);
        return root;
    }
    else {
        root->right = remove(root->right, key);
        return root;
    }
}
int main() {
    List student;
    student.push_front(5);
    student.push_front(30);
    student.push_front(66);
    student.push_front(17);
    student.push_front(39);
    student.push_front(86);
    student.push_front(50);
    student.push_front(93);
    student.push_front(37);
    student.push_front(66);
    student.push_front(69);
    student.push_front(25);
    student.push_front(42);
    student.push_front(68);
    student.push_front(90);
    student.push_front(11);
    student.push_front(51);
    student.push_front(33);
    student.push_front(74);
    student.push_front(3);
    Node* list_head = student.return_head();
    node* tree_root = create_binary_search_tree(list_head);
    inorder_display(tree_root);
    tree_root = remove(tree_root, 17);
    tree_root = remove(tree_root, 66);
    tree_root = remove(tree_root, 33);
    tree_root = remove(tree_root, 25);
    cout<<"\n";
    inorder_display(tree_root);
    return 0;
}