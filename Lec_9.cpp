#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    
    for (int i = 0; i<size;i++){
        cout <<arr[i]<<"   ";
    }
}
int sumFinder(int arr[] , int size){
    int sum = 0;
    for (int i = 0 ; i<size ; i++){
        sum+=arr[i];
    }
    return sum;
}

void maxAndMinElementFinder(int arr[],int size){
    int maxElement = INT32_MIN;

    int minElement = INT32_MAX;
    for (int i = 0 ; i < size ; i++){
        if (arr[i]>maxElement){
            maxElement = arr[i];
        }
        if (arr[i]<minElement){
            minElement = arr[i];
        }
    }
    cout << "maximum element = "<<maxElement << "\n" ;
    cout << "minimum element = "<<minElement << "\n" ;

} 

// linearSearch
bool linearSearch(int arr[],int size,int key){
    for (int i =0 ; i<size ; i++){
        if (arr[i] == key){
            return true;
        }

    }
    return 0;
    
}
 
// array reversal 
void arrayReversal(int arr[],int size){
    int temp = 0;
    int start  = 0;
    int end = size-1;
    /*
    for(int i = 0; i<(size/2) ;i++){
        temp = arr[size-i];   // 6th element stored in a temp variable 
        arr[size-i] = arr[i] ; // 1st element put into 6th element slot
        arr[i] = temp;   // temp variable containing last element is then put into 1st slot
        // does similarly for 5th & 2nd , 4th & 3rd elements .
        // print array after each iteration to understand properly
    }
    */
   while (start <= end){
        swap(arr[start],arr[end]);
        start++;
        end --;
   }

}

int main(){
    /*
    // declaration
    int number[15] = {4,5,52,232,32,23,3,2};
    //cout<<"Value at num[10] :"<<number[1000];
    cout<<"\neverything is working";
    printArray(number,sizeof(number)/sizeof(int));

    int array2[10] = {2,3,4,1,6,7,9,10,0,31};
    maxAndMinElementFinder(array2 ,10);
    cout<<"sum of elements:"<<sumFinder(array2, 10);
    
    int arr4[6] = {9,2,7,5,2,4} ;
    cout<<"\n\nEnter key to search for";
    int key;
    cin >>key;
    bool found = linearSearch(array2, 10,key);
    if (found){
        cout<<"element found in arr 3\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
    else{
        cout<<"not found given element\n\n\n\n\n\n\n\n";
    }
    */
    
    int arrayn[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"before reversal:\n";
    printArray(arrayn,10);
    arrayReversal(arrayn,10);
    cout<<"\n after reversal:\n";
    printArray(arrayn,10);

    cout<<"\n\n\n";
    int arrayn1[9] = {12,23,13,44,657,969,107,826,96};
    printArray(arrayn1,9);
    arrayReversal(arrayn1,9);
    cout<<"\n after reversal:\n";
    printArray(arrayn1,9);
}


