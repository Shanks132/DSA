#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    
    for (int i = 0; i<size;i++){
        cout <<arr[i]<<"  ";
    }
    cout<<"\n\n\n";
}
void swapAlternate(int arr[],int size){
    int i = 0;
    int temp;
    while(i+1<size){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i=i+2;
    }
}


int findUnique(int *arr, int size)
{
    bool flag = 0 ;   
    for (int i=0 ;i<size;i++){
        flag = 0 ;
        int numberToBeScanned = arr[i];
        for (int j = 0 ;j<size ;j++ ){
            
            if (j == i){
                continue ;
            }
            if (numberToBeScanned == arr[j]){
                cout << arr[i] <<" Has duplicates \n";
                flag = 1;   
            }    
                
        }
    if (flag==0){
        return numberToBeScanned;
        }
    }   
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {1,2,3,4,5,6};
    swapAlternate(arr1 , sizeof(arr1)/sizeof(int));   // sizeof return size in byte
    // lets say there is 5 eleement int array then sizeof(arr) is 20 so to get 5 we have to divide by 
    // sizeof int i.e 4   so we get 20 / 4 = 5 elements which is the actual number of elements 
    printArray(arr1,sizeof(arr1)/sizeof(int));
    
    swapAlternate(arr2, 6);
    printArray(arr2, 6);

    int arr3[7] = {1,2,3,1,4,2,3} ;
    cout<<"Unique element: "<<findUnique(arr3,7); 
}   
