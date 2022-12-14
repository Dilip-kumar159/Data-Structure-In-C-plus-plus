#include<iostream>
#include<queue>

using namespace std;

class Node{

  public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

Node* insertIntoBST(Node* root, int data){

    if(root == NULL){
        // create a root node
        Node* root = new Node(data);
        return root;
    }

    if(data < root->data){
        // then go to root->left has it is less than root data
        root->left = insertIntoBST(root->left, data);
    }

    else{
        // Then the data is greater then root->data so go to right of the root
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}
void takeInput(Node* &root){

    int data;
    cin>>data;

    while(data != -1){

        root = insertIntoBST(root, data);
        cin>>data;
    }
}

// LevelOrder traversal see the data
void levelOrder(Node* root){

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

       Node* frontNode = q.front();
       q.pop();

       if(frontNode == NULL){
        // Completed one level
        cout<<endl;

        if(!q.empty()) q.push(NULL);
       }
        else{
        cout<<frontNode->data<<" ";

        if(frontNode->left) q.push(frontNode->left);

        if(frontNode->right) q.push(frontNode->right);
        }
    }
}


void inorder(Node * root){

    if(root == NULL) return;

    // Left Node Right (LNR)
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){

    Node* root = NULL;

    cout<<"Enter the data"<<endl;
    takeInput(root);

    cout<<"Traversing the Binary Search Tree using Inorder Traversal"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Traversing the Binary Search Tree using Level Order Traversal"<<endl;

    levelOrder(root);

    return 0;
}