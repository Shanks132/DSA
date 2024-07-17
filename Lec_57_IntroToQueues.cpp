#include <iostream>
#include <queue>
using namespace std;

// implement queue custom class

class Queue
{
  int *arr;
  int front;
  int rear;
  int size;
  Queue(int size)
  {
    size = 100001;
    arr = new int[size];
    front = 0;
    rear = 0;
  }

public:
  void enqueue(int num)
  {
    if (rear < size)
    {
      arr[rear] = num;
      rear++;
    }
    else
    {
      cout << "\nqueue full\n";
      return;
    }
  }
  int dequeue()
  {
    if (rear == front)
    {
      cout << "queue is empty";
      return -1;
    }
    else
    {
      int ans = arr[front];
      arr[front] = -1;
      front++;
      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
      return ans;
    }
  }
  int front()
  {
    if (front == rear)
    {
      return -1;
    }
    else
    {
      int ans = arr[front];
      return ans;
    }
  }
  bool isEmpty()
  {
    if (front == rear)
    {
      return true;
    }
    return false;
  }
};
class CircularQueue
{
  int *arr;
  int size;
  int front;
  int rear;
  // Initialize your data structure.
public:
  CircularQueue(int n)
  {
    size = n;
    arr = new int[size];
    front = -1;
    rear = -1;
  }

  // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
  bool enqueue(int value)
  {
    // Write your code here.
    if ((front == 0 && rear == size - 1) ||
        rear == (front - 1) % (size - 1))
    {
      // queue is full
      return false;
    }
    else if (front == -1)
    { // first element
      front = rear = 0;
    }
    else if (rear == size - 1 && front != 0)
    { // psuh rear back to start
      rear = 0;
    }
    else
    {
      rear++;
    }
    arr[rear] = value;
    return true;
  }

  // Dequeues top element from queue. Returns -1 if the stack is empty,
  // otherwise returns the popped element.
  int dequeue()
  {
    // Write your code here.
    if (front == -1)
    { // empty queue
      return -1;
    }
    int ans = arr[front];
    arr[front] = -1;
    if (front == rear)
    { // single element present
      front = rear = -1;
    }
    else if (front == size - 1)
    { // to make front cycle back to 0
      front = 0;
    }
    else
    {
      front++;
    }
    return ans;
  }
};
class Deque
{
    int * arr;
    int size;
    int front;
    int rear;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr =new int[size];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
        if(isFull()){
            return false;
        }
        //stack is full
        else if(front == -1){//first element
            front = rear = 0 ;
        }
        else if(front == 0 && rear!=size-1){//push front to the last element
            front = size-1;
        } 
        else {
            front--;
        }
        arr[front] = x;
        return true;        
    }

    // Pushes 'X' in the rear of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull()) {
        //queue is full
            return false;
        }
        else if(front == -1){//first element
            front = rear = 0 ;
        }
        else if(rear == size-1 && front != 0){//psuh rear rear to start
            rear = 0;
        } 
        else {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
         if(front == -1){//empty queue
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ // single element present
            front = rear = -1;
        }
        else if(front == size -1){// to make front cycle rear to 0
            front = 0;
        }
        else {
            front ++;
        }
        return ans;
        
    }

    // Pops an element from the rear of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        
         if(front == -1){//empty queue
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){ // single element present
            front = rear = -1;
        }
        else if(rear == 0){// to make front cycle rear to 0
            rear = size-1;
        }
        else {
            rear --;
        }
        return ans; 
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {   if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {   if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        return (front == -1 ? true : false);
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front == 0 && rear == size-1) ||
         (front!=0 && rear == (front-1)%(size-1)) ) {
        
            return true;
        }
        return false;
    }
};

int main()
{
  deque<int> d ;
  d.push_back(12);
  d.push_front(22);
  
  d.pop_back();

  // queue<int> q;
  // q.push(11);
  // cout << "\nqueue front is : " << q.front();
  // q.push(12);
  // cout << "\nqueue front is : " << q.front();
  // q.push(15);
  // cout << "\nqueue front is : " << q.front();
  // q.push(17);
  // int n = q.size();
  // cout << "\nqueue size is : " << q.size();
  // cout << "\nqueue :";
  // for (int i = 0; i < n; i++)
  // {
  //   cout << " " << q.front();
  //   q.pop();
  // }
  // string ans = q.empty() ? "Yes, its Empty" : "No, Not empty";
  // cout << "\n is queue empty ? " << ans;
  return 0;
}
