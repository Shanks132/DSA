#include<iostream>
using namespace std;


int BinarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);  
    // we use this instead of (start + end) /2 because we may cause problems when 
    // facing element number (2^31)-1 [int_max] because (s+e)/2 causes result>2^31-1    
    while(start<=end){
        if (arr[mid]==key){
            return mid ;    
        }
        if (arr[mid]<key){
            start = mid+1;
        }
        
        if (arr[mid]>key){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1 ;


}
int main(){
    int arr1[6] = {2,4,6,8,12,18};
    int arr2[5] = {1,3,5,7,9};
    int indexE = BinarySearch(arr1,6,12);
    cout << "\n index of 2 is : "<<indexE;

    int indexO = BinarySearch(arr2,5,9);
    cout << "\n index of 7 is : "<<indexO;
}