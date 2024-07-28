#include <iostream>
#include <queue>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

Node* insertIntoBST(Node* root,int d){
  if(root == NULL){
    root = new Node(d);
    return root ;
  }
  if(d > root->data){
    root->right = insertIntoBST(root->right,d);
  }
  else{
    root->left = insertIntoBST(root->left,d);
  }
  return root ;
}
void takeInput(Node* &root){
  int data;
  cin>>data;
  while(data!=-1){
    root = insertIntoBST(root, data);
    cout<<"Next:";
    cin >> data;
  }
} 
void levelOrderTraversal(Node* root){
  queue <Node*> q;
  cout<<"\n";
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    if(temp==NULL){
      cout<<"\n";
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp->left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
  }
}
Node* minVal(Node* root){
  while(root != NULL){
    Node* temp = root->left;
    if(temp == NULL){
      return root;
    }
    root = temp;
  }
}

Node* deleteFromBST(Node* root, int val){
  
  if(root==NULL){
    return root;
  }

  if(root->data == val){
    //delete logic

    //0 Child
    if(root->right==NULL&&root->left==NULL){
      delete root;
      return NULL;
    } 

    //1 Child
    if(root->right!=NULL && root->left==NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    }
    
    if(root->right==NULL && root->left!=NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }

    //2 child
    
    if(root->right!=NULL && root->left!=NULL){
      int mini = minVal(root->right)->data;
      // cout<<mini;
      root->data = mini;
      root->right = deleteFromBST(root->right, mini);
    }
  }

  else if(root->data > val){
    root->left = deleteFromBST(root->left,val);
    return root;
  }
  else{
    root->right = deleteFromBST(root->right,val);
  }

}

int main(){
  Node* root = NULL;
  cout<<"Enter data to create BST"<<"\n";
  takeInput(root);
  levelOrderTraversal(root);
  cout << "minVal -" <<minVal(root)->data<<endl;
  deleteFromBST(root,6);
  levelOrderTraversal(root);
  return 0;
}
// 6 3 8 2 5 7 10 12 11 15 -1