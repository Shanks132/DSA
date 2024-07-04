#include <iostream>
using namespace std;
void printArr(int arr[],int size){
  for(int i = 0; i<size; i++){
    cout << arr[i] << "\t";
  }
  cout<<"\n";
}
void selectionSort(int arr[], int n) {
  // Write your code here.
  
  for (int i = 0; i < n; i++){
      int minIndex = i ;

      for (int j = i+1; j<n; j++){
          
          if (arr[j] < arr[minIndex]){
              minIndex = j;
          }
      }
      swap(arr[minIndex],arr[i]);
      printArr(arr,n);
    
  }
}
void SelSortByRec(int *arr, int size,int startingEle =0){
    if(startingEle == size-2){
      return ;
    }
    
    //find and swap smallest number
    int smallestNum = startingEle ;
    for(int i=startingEle;i<size;i++){
      if(arr[i]<arr[smallestNum]){
        smallestNum = i;
      }
    }
    swap(arr[startingEle],arr[smallestNum]);
    
    printArr(arr,6);
    //recursive call for reduced list considering everything upto starting Element is sorted  
    SelSortByRec(arr,size,++startingEle);    
}
int main(){
    int arr[6]={6,5,4,3,2,1};
    //selectionSort(arr,6);
    printArr(arr,6);
    SelSortByRec(arr,6);
    
    
    
}