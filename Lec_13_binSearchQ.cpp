#include<iostream>
using namespace std;
/*
int firstOcc(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);  
    int ans = -1;
    while(start<=end){
        if (arr[mid]==key){
            ans = mid;
            end = mid - 1;     
        }
        if (arr[mid]<key){
            start = mid+1;
        }
        
        if (arr[mid]>key){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans ;
}

int lastOcc(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+((end-start)/2);  
    int ans = -1;
    while(start<=end){
        if (arr[mid]==key){
            ans = mid;
            start = mid + 1;     
        }
        if (arr[mid]<key){
            start = mid+1;
        }
        
        if (arr[mid]>key){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return ans ;
}
int main(){
    int arr1[6] = {0,0,2,2,5,9};
    int indexStart = firstOcc(arr1,6,2);
    int indexEnd = lastOcc(arr1,6,2);
    cout << "\n End pos of 2 is : "<<indexStart;
    cout << "\n Last pos of 2 is : "<<indexEnd;
}*/

// peak in mountain array



int peakIndexInMountainArray(int arr[],int size) {
        int start = 0 ;
        int end = size -1 ;
        int mid = start+((end-start)/2);
        
        while (start<end){
            //cout<<"start = "<<start<<" end = "<<end<<endl;
            if (arr[mid]<arr[mid + 1]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
            mid = start+((end-start)/2);
        }
        return start;
}

int main(){
    int arr1[] = {1,2,5,6,4,2,1};
    cout<<"pp piip ooo\n";
    //cout<<peakIndexInMountainArray(arr1,6);
    //cout<<peakIndInMountainArrayRec(arr1,0,7);
} 
