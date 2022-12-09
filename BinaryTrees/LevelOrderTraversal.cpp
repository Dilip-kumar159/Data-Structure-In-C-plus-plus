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

            if(temp->left) q.push(temp->left);

            if(temp->right) q.push(temp->right);
        }
    }
}
