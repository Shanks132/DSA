#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }


};
void nodeTraverse(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<"value:"<<temp->val<<" address-"<<temp<<"\n";
        temp = temp->next;
    }
}

void LLReversal(Node* &head){
    if(head == NULL || head->next==NULL){
        cout<<"empty list or single element present";
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;

}
void recLLReversal(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return ;
    }
    
    Node* forward = curr->next;
    curr->  next = prev; 
    recLLReversal(head,forward,curr);

}
Node* recLLreverse2(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chotaHead = recLLreverse2(head->next);
    head->next->next=head;
    head->next = NULL;
    return chotaHead;

}



int lengthLL(Node* head){
    int ans = 1;
    Node* temp = head;
    if(head==NULL){
        return 0;
    }
    if(head->next==NULL){
        return 1;
    }
    while(temp->next!=NULL){
        ans++;
        temp=temp->next;
    }
    return ans;
}

Node* lengthApp2(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* pro = head->next; //starts from element 2
    Node* mid = head;  // starts from element 1
    
    while( pro!=NULL){
        if(pro!=NULL){
            pro = pro->next;
            if(pro!=NULL){
                pro=pro->next;
            }
        }
        mid = mid->next;
        cout<<"pro:"<<pro<<" mid:"<<mid<<endl;
    }           
    
    return mid;
}




int main(){
    Node* n0 = new Node(0);
    Node* head = n0;
    Node* n1 = new Node(1);
    n0->next = n1;
    Node* n2 = new Node(2);
    n1->next=n2;
    Node* n3 = new Node(3);
    n2->next = n3;
    Node* n4 = new Node(4);
    n3->next = n4;
    cout<<head<<"\n";
    nodeTraverse(head);

    int length = lengthLL(head);
    int ans = (length/2)+1;
    cout<<"Middle:"<<ans<<"\n";

    cout<<"Middle using runner approach:"<< lengthApp2(head);
    // Node* curr = head;
    // Node* prev = NULL; 
    // recLLReversal(head,curr,prev);
    // cout<<"after reversal:\n";
    // nodeTraverse(head);    
}