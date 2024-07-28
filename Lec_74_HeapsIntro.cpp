#include <iostream>
using namespace std;
#include <queue>
class Heap
{
public:
  int arr[100];
  int size;

  Heap()
  {
    size = 0;
    arr[0] = -1;
  }
  void insert(int val)
  {
    size = size + 1;
    int index = size;
    arr[index] = val;
    while (index > 1)
    {
      int parent = index / 2;
      if (arr[parent] < arr[index])
      {
        swap(arr[parent], arr[index]);
        index = parent;
      }
      else
      {
        return;
      }
    }
  }
  void print()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
  void deleteRootNode(){
    if (size == 0){
      cout << "nothing to delete";
      return ;
    }

    // swap root with top element
    arr[1] = arr[size];
    size--;
    cout<<"Last element goes to root\n";
    //now put root at correct place
    int i = 1;
    while (i < size){
      int leftIndex = 2 * i;
      int rightIndex = 2 * i + 1;
      if (leftIndex <= size && arr[leftIndex] > arr[i]){
        cout<<arr[i]<<"to the left\n";
        swap( arr[i],arr[leftIndex]);
        i = leftIndex;
      }
      else if (rightIndex <= size && arr[rightIndex] > arr[i]){
        swap(arr[i],arr[rightIndex]);
        i = rightIndex;
        cout<<"to the right\n";
      }
      else{
        return;
      }
    }
  }
};


void heapify(int arr[], int size, int i){

  int largest = i;
  int left = 2*i;
  int right = 2*i +1;

  if(arr[largest]<arr[left]&& left<=size){
    largest = left;
  } 
  if(arr[largest]<arr[right]&& right<=size){
    largest = right;
  } 
  if(largest != i){
    swap(arr[largest],arr[i]);
    heapify(arr,size,largest);
  }
}

void heapSort(int arr[], int size){
  
  while(size>1){
    swap(arr[1], arr[size]);
    size--;
    heapify(arr,size,1);
  }
}
int main(){
  Heap h;
  h.insert(50);
  h.insert(53);
  h.insert(52);
  h.insert(54);
  h.insert(55);
  h.insert(59);

  h.print();
  h.deleteRootNode();
  h.print();

  int arr[8] = {-1,60,73,40,35,36,75,80};
  int n = 7;
  for(int i =n/2;i>0;i--){
    heapify(arr,n,i);
  }
  for(int i = 0; i<=n; i++){
    cout<<arr[i]<< " ";
  }
  cout<<"\n";

  heapSort(arr,7);
  for(int i = 0; i<=n; i++){
    cout<<arr[i]<< " ";
  }

  cout<<"\nusing priority queue\n";

  priority_queue<int> pq;

  pq.push(4);
  pq.push(2);
  pq.push(5);
  pq.push(1);
  pq.push(3);

  cout<<pq.top()<<endl;
  

  //minheap
  cout<<"minheap"<<endl;
  priority_queue <int,vector<int>,greater<int>> minheap;
  minheap.push(4);
  minheap.push(2);
  minheap.push(5);
  minheap.push(1);
  minheap.push(3);

  cout<<minheap.top();

  return 0;
}
