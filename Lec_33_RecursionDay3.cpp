#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size  ==1 ){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}
int sumOfArr(int arr[],int size){
    //base case:
    if(size==0){
        return 0;
    }
    //recursion
    return arr[0]+sumOfArr(arr+1,size-1);
}
bool linearSearchWithRecursion(int arr[],int size,int target){
    //base case 
    if(size==0){
        return false;
    }
    //1 case solve karo
    if(arr[0]==target){
        return true;
    }
    else{
    //call further part with 
    return linearSearchWithRecursion(arr+1,size-1,target);
    }
}
void print(int arr[], int s, int e){
    for(int i=s ; i<=e ;i++){
        cout<<arr[i]<<"\t";
    }
    
}
int peakIndexInMountainArrayRec(int arr[], int start, int end){
    //base case:
    if(start==end){
        return start;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]<arr[mid+1]){
        start = mid+1;   
    }
    else{
        end = mid;
    }
    return peakIndexInMountainArrayRec(arr,start,end);

}
bool binSearchUsingRec(int arr[], int s, int e, int key){
    print(arr,s,e);
    int mid = s+ (e-s)/2 ;
    cout<<"arr[mid]:"<<arr[mid]<<"\t";
    cout<<"\n";
    //base case:
    if(s>e){
        return false;
    }
    
    
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]>key){
        return binSearchUsingRec(arr,s,mid-1,key);
    }
    else{
        return binSearchUsingRec(arr,mid+1,e, key);
    }
}
int main(){
    int arr[10] = {2,3,4,5,7,8,9,11,13,14};
    //cout<<"array sorted or not:"<<isSorted(arr,5);
    //cout<<"\narr sum :"<<sumOfArr(arr,5);
    //int n = 6;
    //bool ans = linearSearchWithRecursion(arr,5,4);
    //cout<<"\nn is in arr :"<<ans;
    if(binSearchUsingRec(arr,0,9,145)){
        cout<<"found it ";
    }
    else{
        cout<<"not found";
    }
}