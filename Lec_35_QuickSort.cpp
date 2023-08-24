#include <iostream>
using namespace std;
void print(int *arr, int size){
    for(int i=0 ; i<size ;i++){
        cout<<"\t"<<arr[i];
    }
}
int partition(int arr[],int s, int e){
    int count=0;
    int pivot = arr[s];
            
    for(int i = s+1; i<=e;  i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //placing pivot at right place
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    // now we have to put all elements less than pivot to LHS of pivot and vice versa
    int i = s; int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    
    return pivotIndex;

}
void quickSort(int *arr, int s, int e){
    // base case 
    if(s>=e){
        return;
    }
    //partition karenge:
    int p = partition(arr, s, e);
    //left wala part ko sort
    quickSort(arr,s,p-1);
    //right part ko sort
    quickSort(arr, p+1, e);

}
int main(){
    int arr[5] = {2,4,1,6,9};
    int n =5;

    cout<<"before sort:\n";
    print(arr,5);
    quickSort(arr,0,n-1);

    cout<<"\nafter sort:\n";
    print(arr,5);
}