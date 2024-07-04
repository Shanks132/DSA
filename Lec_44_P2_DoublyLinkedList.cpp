#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL; 
    }


};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
}
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len ++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &  tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;

    }
    else{
        Node* temp = new Node(d);
        temp-> next = head;
        head -> prev = temp;
        head = temp;
        cout<<"\nnew head inserted:\n";
    }
}
void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        
        cout<<"\nnew tail inserted null:\n";
        return ;

    }
    else{
        Node* temp = new Node(d);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        cout<<"\nnew tail inserted:\n";
    }
}
void insertAtPosition(Node* &head, Node* &tail, int d, int pos){
    if(pos == 1){
        insertAtHead(head,tail,d);
        return ;
    }
    int count = 1;
    Node* temp = head;
    while(count < pos-1 && temp->next != NULL){
        temp = temp->next;
        count ++;
    }
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    else{
        
        Node* newNode = new Node(d);
        newNode->next = temp->next;
        (temp->next)->prev = newNode;
        newNode->prev = temp;
        temp->next = newNode;
        cout<<"\nnew Node inserted at :"<<count<<"\n";
    }


}
void deleteNode(Node* &head, Node* &tail, int pos){
    // deleting the head
    if(pos == 1){
        Node* temp = head;
        head->next->prev=NULL;
        head = head->next;
        cout<<"\n deleting the head:"<<temp->data<<"\n";
        delete temp;
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count < pos && temp->next!=NULL){
        temp = temp->next;
        count ++;
    }
    if(temp->next == NULL){
        temp->prev->next = NULL;
        tail = tail->prev;
        cout<<"\ndeleting the tail:"<<temp->data<<"\n";;
        delete temp;
    }
    else{
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        
        cout<<"\ndeleting the data:"<<temp->data<<"\n";
        delete temp;
    }
}

int main(){
    //Node* n1 = new Node(1);
    ///Node* n2 = new Node(2);
    //n1->next = n2;
    //Node* head = n1;
    //print(head); 
    Node* head = NULL;
    Node* tail = NULL;

    //int length = getLength(head);
    //cout<<"\nlength of DLL :"<<length<<"\n";

    insertAtHead(head, tail, 2);
    print(head);

    insertAtHead(head, tail, 3);
    print(head);
    

    insertAtTail(head, tail, 0);
    print(head);

    insertAtPosition(head,tail,4,1);
    print(head);

    deleteNode(head,tail,4);
    print(head);

}