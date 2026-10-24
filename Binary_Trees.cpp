//every node can have atmost two children. 
#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
//root->left->right
void preorder (Node* root) {
    if (root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//left->root->right
void inorder (Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//left->right->root
void postorder (Node* root) {
    if (root==NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int count_nodes (Node* root) {
    if (root==NULL) {
        return 0;
    }
    int count_left = count_nodes(root->left);
    int count_right = count_nodes(root->right);
    return 1 + count_left + count_right;
}

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int left_height = height(root->left);
    int right_height = height(root->right);
    return 1 + max(left_height,right_height);
}

int count_leaf_nodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if ((root->left==NULL)&&(root->right==NULL)) {
        return 1;
    }
    return count_leaf_nodes(root->left) + count_leaf_nodes(root->right);
}
bool search(Node* root, int key) {
    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        return true;
    }

    return search(root->left, key) ||
           search(root->right, key);
}

Node* Mirror(Node* root) {
    //we just need to swap the tw ochildren of each node;
    if (root == NULL) {
        return root;
    }
    swap(root->left, root->right);
    if (root->left != NULL) {
        root->left = Mirror(root->left);
    }
    if (root->right != NULL) {
        root->right = Mirror(root->right);
    }
    return root;
}
bool identical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }

    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    if (root1->data != root2->data) {
        return false;
    }

    return identical(root1->left, root2->left) &&
           identical(root1->right, root2->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    preorder(root);
    cout<<"\n";
    root = Mirror(root);
    cout<<"\n";
    preorder(root);
    return 0;
}