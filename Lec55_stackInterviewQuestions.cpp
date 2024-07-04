#include <iostream>
#include <stack>
using namespace std;
int main (){
  stack <char> s;
  string str = "meow";

  for(int i = 0; i<str.length() ; i++){
    s.push(str[i]);
  }
  string ans= "";

  while(!s.empty()){
    ans.push_back(s.top());
    s.pop();
  }
  cout<<"reversed :"<<ans;
}

void deleteMiddleStack(stack <int> inputStack, int size){
  int count = 0;
  solve(inputStack,count,size);
}
void solve(stack <int> inputStack, int count, int size){
  if(count == size/2){
    inputStack.pop();
    return ;
  }

  //keep the top most element aside
  int num = inputStack.top();
  inputStack.pop();

  solve(inputStack, count+1, size);
  inputStack.push(num);

}

//check for valid parathesis 

bool isValidParenthesis(string expression){
  stack <char> st;
  for(int i=0; i<expression.length(); i++){
    char ch = expression[i];
    //if opening bracket, push
    if(ch=='(' || ch=='{' || ch == '['){
      st.push(ch);
    }
    //if closing bracket, check top of the stack and pop if appropriate opening bracket is on top
    else{
      if(!st.empty()){
        char top = st.top();
        if(
          (top ==']' && ch == '[') || 
          (top =='(' && ch == ')' )||
          (top =='{' && ch == '}')){
          st.pop();
        }
        else{
          return false;
        }
      }
      else{
        return false;
      }
    }
  }
  
  
  if(st.empty()){return true;}
  else {return false;};
}

  
//push element at bottom
stack <int> pushAtBottom(stack<int> st, int num){
  solve2(st,num);
  return st;
}
void solve2(stack <int> st, int num){
  if(st.empty()){
    st.push(num); 
    return ;
  }
  else{
    int top = st.top();
    st.pop();

    //recursive call
    solve2(st, num);

    //add back the element  
    st.push(top);
  }
}