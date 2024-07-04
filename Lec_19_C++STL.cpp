#include <iostream>
#include<array>
#include <vector>
#include <deque>
#include<list>
#include<stack>
#include <queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
void StlArr(){

  /*STL ARRAYS
    int basic[3] = {1,2,3};
    array <int,4>a = {1,2,3,4};

    int Size = a.size();
    for(int i = 0 ; i<Size ; i++){
        cout<<a[i]<<endl;
    } 
    cout<<"\nfirst element "<<a.front();
    cout<<"\nlast element "<<a.back();
    cout<<"\nelement at 2"<<a.at(2);
    cout<<"\nif empty or not :"<<a.empty();
    */
}
void Vectors(){
  //VECTORS:dynamic array

    /* as soon as vector adds element over size limit: 
    it doubles it size copies all old elements and dumps the old vector
    can use shrink to fit to reduce size 
    
   vector<int> v ;
   cout<<"\nCapacity:"<<v.capacity();
   cout<<"\nsize"<<v.size();

   v.push_back(1);
   
   cout<<"\n\nCapacity:"<<v.capacity();
   cout<<"\nsize:"<<v.size();
   
   v.push_back(2);
   
   cout<<"\n\nCapacity:"<<v.capacity();
   cout<<"\nsize:"<<v.size();
   
   v.push_back(3);
   
   cout<<"\n\nCapacity:"<<v.capacity();
   cout<<"\nsize:"<<v.size(); 

   cout<<"\nelement at 2:"<<v.at(2);
   cout<<"\nfirst element "<<v.front();
   cout<<"\nlast element "<<v.back()<<"\n";
   for(int i:v){
    cout<<v[i-1]<<"\t";
   }
    v.pop_back();
    cout<<"\npopback:\n";
    for(int i:v){
    cout<<v[i]<<"\t";
   }
   cout<<"\nNew Vector:";
   vector <int> a(6,2); //vector <data_type> name(size,default_val_of_all_elements)
   for(int i:a){
    cout<<i<<"\t";
   }
   cout<<"\n\nvector a\nbefore clear size:"<<a.size()<<"\tcapacity:"<<a.capacity();
   a.clear();
   cout<<"\nafter clear size:"<<a.size()<<"\tcapacity:"<<a.capacity();
   */
}
void doubleEndedQueue(){
   // DOUBLE ENDED QUEUE / DEQUE / DQ
  /* deletion and insertion possible at both ends 
  random acess possible 
  implemented using multiple static arrays
  */

 /*
  deque <int> d;
  d.push_back(1);
  d.push_front(2);
  d.push_back(3);
  d.push_front(4);
  for(int i:d){
    cout<<i<<"\t";
   }
   cout<<"\npop back:\n";
  d.pop_back();
  for(int i:d){
    cout<<i<<"\t";
   }
   cout<<"\n pop front:\n";
  d.pop_front();
  for(int i:d){
    cout<<i<<"\t";
   }
   d.push_back(3);
   d.push_front(4);
   cout<<"\n restoring DQ:\n";
   for(int i:d){
    cout<<i<<"\t";
   }
   cout<<"\nelement at index 1:"<<d.at(1);
   cout<<"\nfirst element "<<d.front();
   cout<<"\nlast element "<<d.back()<<"\n";
   cout<<"\nif empty or not :"<<d.empty();
  
   cout<<"\n\ndeque  a\nbefore erase size:"<<d.size()<<"\n";
   for(int i:d){
    cout<<i<<"\t";
   }
   cout<<"\n";
   d.erase(d.begin(),d.begin()+1);
   
   cout<<"\nafter erase size:"<<d.size()<<"\n";
   for(int i:d){
    cout<<i<<"\t";
   }
   cout<<"\n ";
 */

}
void Lists(){
  /*
LISTS - implemented using doubly linked lists

    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    for(int i:l){
    cout<<i<<"\t";
   }
    cout<<"\n\nlist  l\nbefore erase size:"<<l.size()<<"\n";
   for(int i:l){
    cout<<i<<"\t";
   }
   cout<<"\n";
   l.erase(l.begin());
   
   cout<<"\nafter erase size:"<<l.size()<<"\n";
   for(int i:l){
    cout<<i<<"\t";
   }
   cout<<"\n list size =  "<<l.size();
   // all other func such as pop back pop front etc are also available

   list <int> l2(5,123);
   cout<<"\n\n\n new list l2:\n";
   for(int i:l2){
    cout<<i<<"\t";
   }
   cout<<"\n";

   */
}
void Stacks(){
  /*STACK: imagine shaadi me rakhi hui 
  plates 
  nayi plate nikalne hai to upar se uthao
  stack me add karna hai to upar lagao
   Last in First Out
  
  stack <string> s;
  s.push("kono ");
  s.push("giorno ");
  s.push("giovanna ");
  s.push("ni wa ");
  s.push("yume ga aru");
  cout<<"top element:"<<s.top();
  s.pop();
  
  cout<<"\ntop element after pop:"<<s.top();
  
  cout<<"\nempty or not"<<s.empty()<<"\n and size:"<<s.size();
*/
}
void Queues(){
  /*
  queue <string> q;
  q.push("kono ");
  q.push("giorno ");
  q.push("giovanna ");
  q.push("ni wa ");
  q.push("yume ga aru");
  cout<<"front element:"<<q.front();
  q.pop();
  
  cout<<"\nfront element after pop:"<<q.front();
  
  cout<<"\nempty or not:"<<q.empty()<<"\n and size:"<<q.size();
  
*/
}
void PriorityQueues(){
    /*
  priority queue- in this first element is always maximum element(or minimum)
  depends on what heap created (min heap or max heap)
  always the lowest or highest element is fetched
 

  //max heap
  priority_queue<int> maxi;
  //min-heap
  priority_queue<int,vector<int>, greater<int> > mini;
  maxi.push(122);
  maxi.push(21);
  maxi.push(32);
  maxi.push(4);
  int n = maxi.size();
  for(int i = 0; i<n;i++)
  {
    cout<<maxi.top()<<"\t";
    maxi.pop();
  }
  mini.push(1);
  mini.push(7);
  mini.push(2);
  mini.push(47);
  n = mini.size();
  cout<<"\n\n";
  for(int i = 0; i<n;i++)
  {
    cout<<mini.top()<<"\t";
    mini.pop();
  }
  cout<<"khali hai ki nhi?? "<<bool(mini.empty());
 */
}
void Map(){
/*
  map<int,string> m;
  m[1] = "babbar" ; // m[key] = value;
  m[2] = "salman";
  m[13] = "lund bc";
  m.insert({5,"bheem"});
  
  cout<<"pre erase:\n";
  for(auto i:m){
    cout<<i.first<<"\t "<<i.second<<"\n";
  }
  cout<<"\nfinding 13 position:"<<m.count(13);
  m.erase(13);
  cout<<"\npost erase:\n";
  for(auto i:m){
    cout<<i.first<<"\t "<<i.second<<"\n";
  }
 */
}
void Set(){
  /*
  Set - all elements are unique only stores a element once
  implemented using BST
  no modifications 
  only remove or add
  ordered or unordered
  
  set<int> s;
  s.insert(5);
  s.insert(4);
  s.insert(6);
  s.insert(0);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(6);
  s.insert(0);
  s.insert(6);
  s.insert(0); // O(logn)
  for(auto i : s){
    cout<< i <<"\t";
  }
  s.erase(s.begin());
  cout<<"\nafter erase: \n";
  for(auto i : s){
    cout<< i <<"\t";
  }
  cout<<"\ncheck if element 5 present:"<<s.count(5)<<"\n";
  set<int>::iterator itr = s.find(5);
  for(auto it = itr; it!= s.end();it++){
      cout<<*it<<"\t";
  }cout<<endl;
 //all map func have O(logN)

 */

}


int main (){
//Algorithms
  vector<int> v;
  v.push_back(0);
  v.push_back(1);
  v.push_back(5);
  v.push_back(8);
  cout<<"finding 8:"<<binary_search(v.begin(),v.end(),8)<<endl; // element present or not
  //upper bound, lower_bound, str reversal, sorting(introSort- mix of insertion,heapSort, and quickSort),


}