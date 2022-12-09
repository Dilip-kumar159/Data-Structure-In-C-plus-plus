#include<iostream>
#include<queue>

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

void buildTreeLevelOrder(Node *&root){
    queue<Node*> q;
    cout<<"Enter the data for Root : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){

        Node * temp = q.front();
        q.pop();

        cout<<"Enter the left Node for -> "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right Node for -> "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}



void levelOrderTraversal(Node * &root){
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

void inorder(Node * root){

    if(root == NULL) return;

    // Left Node Right (LNR)
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){

    Node * root = NULL;

    buildTreeLevelOrder(root);

    cout<<"printing Level Order Traversal"<<endl;

    levelOrderTraversal(root);

    cout<<endl<<"Printing Inorder traversal"<<endl;

    inorder(root);

    return 0;
}