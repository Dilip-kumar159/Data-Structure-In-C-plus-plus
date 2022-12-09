#include<iostream>
#include<queue>

using namespace std;

// Creation of a Node
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


// Function to Build the Binary Tree

Node * buildTree(Node * root){

    cout<<"Enter the data -> "<<endl;
    int data;
    cin>>data;

    // initialize the root to the node
    root = new Node(data);

    if(data == -1) return NULL;

    cout<<"Enter the data for inserting left of tree -> "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting right of tree -> "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

// Level Order Traversal
void levelOrderTraversal(Node * root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node * temp = q.front();
        q.pop();

        // check the q.front() is null or data present in it
        if(temp == NULL){

            // if pointer hits this then one level is completed 
            cout<<endl;
            if(!q.empty()){
                // Queue has still child nodes
                q.push(NULL);
            } 
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);

            if(temp->right) q.push(temp->right);
        }
    }
}

// Inorder Traversal
void inorder(Node * root){

    if(root == NULL) return;

    // Left Node Right (LNR)
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// Preorder Traversal
void preorder(Node * root){

    if(root == NULL) return;

    // Node Left Right
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}


// Postorder Traversal
void postorder(Node * root){

    if(root == NULL) return;

    //  Left Right Node
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}



int main(){

    Node *root = NULL;

    root = buildTree(root);

    cout<<"Printing Level Order Traversal"<<endl<<endl;

    levelOrderTraversal(root);

    cout<<endl<<"Printing Inorder Traversal -> ";
    inorder(root);

    cout<<endl<<"Printing Preorder Traversal -> ";
    preorder(root);

    cout<<endl<<"Printing Postorder Traversal -> ";
    postorder(root);

    return 0;
}