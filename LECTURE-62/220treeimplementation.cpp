#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

// Level Order Traversal
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);  // for separating the levels

    while(!q.empty()) {
        node* temp = q.front();
        cout << "temp: " << temp << endl;
        q.pop();

        if(temp == NULL) { // purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { // queue still has some child nodes
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if(temp->left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// InorderTraversal
void Inorder(node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

// preorderTraversal
void preorder(node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// postorderTraversal
void postorder(node* root) {
    // base case
    if(root == NULL) {
        return;
    }

    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    node *root = NULL;

    
    // creating a binary tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Printing the level order traversal output " << endl;
    // level order traversal
    levelOrderTraversal(root);
    
    cout << endl;
    cout << "Printing the inorder traversal output " << endl;
    Inorder(root);
   
    cout << endl;
    cout << "Printing the preorder traversal output " << endl;
     preorder(root);
    
    cout << endl;
    cout << "Printing the postorder traversal output " << endl;
    postorder(root);
    return 0;
}