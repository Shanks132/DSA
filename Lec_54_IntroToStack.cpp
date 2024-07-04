#include <iostream>
#include <stack>
using namespace std;
class Stack{
  public:
  //properties
  int *arr ;
  int top;
  int size ;
  //functions
  Stack(int n){
    this->size = n;
    arr = new int[size];
    top = -1;
  }
  void push(int element){
    if(top<size-1){
      top++;
      arr[top] = element;
    }
    else {
      cout<<"\nstack overflow"<<endl;

    }
  }
  void pop (){
    if(top > -1){
      top --;
    }
    else{
      cout<<"\nstack underflow";
    }
  }
  int peek(){
    if(top>=0){
    return arr[top];
    }
    else{
      cout<<"\nStack empty "<<endl;
      return -1;
    }
  }
  bool isEmpty(){
    return top==-1 ? true : false;
  } 
};
int main(){
  // // stack creation
  // stack <int> s;
  //push operation
  // s.push(2);
  // s.push(4);
  //pop operation
  // s.pop();
  // cout<<"\ntop element in stack - "<<s.top();
  // cout<<"\nis stack empty -"<<s.empty();
  // cout<<"\nstack size is "<<s.size();

  Stack st(6);
  st.push(2);
  st.push(4);
  cout<<st.peek();
  st.pop();
  st.pop();
  cout<<st.peek();
  if(st.isEmpty()){
    cout<<"\nkaali stack";
  }
  else{
    cout<<"\nbhara stack";
  }
  
  
  
  return 0;


}

class TwoStack{
  int *arr;
  int top1;
  int top2;
  int size;

  TwoStack(int n){
    this->size = n;
    top1 = -1;
    top2 = n;
    arr = new int[n];
  }

  void push1(int n){
    if(top2-top1 > 1){
      //atleast 1 empty space present
      top1++;
      arr[top1]=n;
    }
    else {
      cout<<"stack overflow";
    }
  }
  
  void push2(int n){
    if(top2-top1 > 1){
      //atleast 1 empty space present
      top2--;
      arr[top2]=n;
    }
    else {
      cout<<"stack overflow";
    }
  }
  int pop1(){
    if(top1>=0){
      return arr[top1];
      top1 --;
    }
    else {
      cout<<"stack underflow";
      return -1;
    }
    
  }
  int pop2(){
    if(top2<size){
      return arr[top2];
      top2 ++;
    }
    else {
      cout<<"stack underflow";
      return -1;
    }
  }
};
