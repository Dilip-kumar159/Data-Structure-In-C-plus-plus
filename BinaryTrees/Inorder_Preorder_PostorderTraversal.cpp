#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node * left;
    Node * right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Inorder , Preorder , Postorder Traversal Recursive Apporach

void inorder(Node * root){

    if(root == NULL) return;

    // Left Node Right (LNR)
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node * root){

    if(root == NULL) return;

    // Node Left Right
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


void postorder(Node * root){

    if(root == NULL) return;

    //  Left Right Node
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}

