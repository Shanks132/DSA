
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor

};
void print(Node* &tail){
    if(tail==NULL){
        cout<<"empty list\n";
        return ;
    }
    cout<<"\n";
    Node* temp = tail;
    do{
        cout<<temp->data<<"\t";
        temp = temp->next;
    }while(tail!=temp);
}
void insertAtNode(Node* &tail, int element, int d)
{
    //assuming element present in the list
    
    // if CLL is empty
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;    
        tail->next = tail;
        return;
    } 
    //multiple elements exist
   else{
    Node* current = tail;
    while(current->data != element){
        current = current->next;
    }

    Node* temp = new Node(d);
    temp->next = current->next;
    current->next = temp;
    return;
    }
}

void deleteNode(Node* &tail, int element){

    // empty list
    if(tail ==NULL){
        cout<<"empty list cant delete\n";
        return ;
    }

    //if 1 node only
    
    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=element){
            prev = curr;
            curr = curr->next;       
        }
        //if removing the tail element
        if(curr == tail){
            tail = tail->next;
        }
        prev->next = curr->next;
        
        //empty LL
        if(curr == prev){
            tail = NULL;
            cout<<"\nlist will be emptied\n";
        }
        curr->next = NULL;
        delete curr;
    }


}
int main(){
    Node* tail = NULL;
    insertAtNode(tail, 3, 3);
    print(tail);
    
/*
    insertAtNode(tail, 3, 5);
    print(tail);

    insertAtNode(tail, 3, 4);   
    print(tail);
    insertAtNode(tail, 4, 5);   
    print(tail);
    insertAtNode(tail, 5, 6);   
    print(tail);
    insertAtNode(tail, 6, 7);   
    print(tail);
    insertAtNode(tail, 7, 8);   
    print(tail);
*/
    deleteNode(tail,3);
    print(tail);

    // cout<<"pp\n";
    // cout<<"tail :"<<tail->data;
    
    // cout<<"\nno 2 :"<<tail->next->data;
    // cout<<"\nno 3 :"<<tail->next->next->data;
    // cout<<"\nno 4 :"<<tail->next->next->next->data;
    

}
