#include <iostream>
#include <queue>
using namespace std;

class node{
public:
  int data;
  node* left;
  node* right;
  // node* children[];

  node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node* buildTree(node* root){
  cout << "\nenter node data:\n";
  int data;
  cin>>data;
  
  root = new node(data);
  if(data == -1){
    return NULL;
  }

  cout<<"\nEnter data for inserting in left";
  root->left = buildTree(root->left);
  cout<<"\nEnter data for inserting in right";
  root->right = buildTree(root->right);
  return root;
}

void levelOrderTraversal(node* root){
  queue <node*> q;
  cout<<"\n";
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    node* temp = q.front();
    q.pop();
    if(temp==NULL){
      cout<<"\n";
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout<<temp->data<<" ";
      if(temp->left!=NULL){
        q.push(temp->left);
      }
      if(temp->right!=NULL){
        q.push(temp->right);
      }
    }
  }
}

void inorder(node* root){
  //left root right

  if(root == NULL){
    return;
  }

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
  return ;

}
void preOrder(node* root){
  cout<<root->data<<" ";
   if(root->left != NULL){
    preOrder(root->left);
  }
  if(root->right != NULL){
    preOrder(root->right);
  }
}
void postOrder(node* root){
   if(root->left != NULL){
    postOrder(root->left);
  }
  if(root->right != NULL){
    postOrder(root->right);
  }
  cout<<root->data<<" ";
}

void buildFromLevelOrder(node* root){
  queue<node*> q;
  cout<<"Enter root data";
  int data;
  cin >>data;
  root = new node(data);
  q.push(root);

  while(!q.empty()){
    node *temp = q.front();
    q.pop();
    cout<<"Enter left node for"<<temp->data<<"\n";
    
    int leftData;
    cout<<"Enter leftData";
    cin >> leftData;

    if(leftData != -1){
      temp->left = new node(leftData); 
      q.push(temp->left);
    }

    int rightData;
    cout<<"Enter rightData";
    cin >> rightData;
    if(rightData != -1){
      temp->right = new node(rightData); 
      q.push(temp->right);
    }

  }
}
int main(){
  node* root = NULL;
  // creating tree
  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
  root = buildTree(root);
  cout<<"\nLevel order Traversal : ";
  levelOrderTraversal(root);
  
  // cout<<"\n in order Traversal :";
  // inorder(root);

  // cout<<"\n pre order Traversal :";
  // preOrder(root);

  // cout<<"\n post order Traversal :";
  // postOrder(root);
  return 0;
} 