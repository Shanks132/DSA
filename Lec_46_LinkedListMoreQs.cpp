#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        value = val;
        this->next = NULL;
    }
};

Node* reverseInKGroups(Node* head, Node* prev, int k){
    if(head==NULL){
        return NULL;
    }
    //step 1 : reverse k nodes
    Node* fwd = NULL;
    Node* curr = head;
    int count = 0;
    while(count<k && curr!=NULL){
        count ++;
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    //step 2 : recursion deklega 
    if(fwd!=NULL){
        // head->next = reverseInKGroups(fwd,k);
    }
    return prev;
}
int main(){
    Node *n0 = new Node(0);
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);
    n0->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=NULL;

}