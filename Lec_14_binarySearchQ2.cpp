#include<iostream>
using namespace std;
int findPivotElement(int nums[],int size){
    int s = 0;
    int e = size - 1;
        
    while(s<e){ 
        int mid = s+ (e-s)/2;
        if (nums[mid]>=nums[0])
        {
            s = mid + 1 ;
        }
        else{
            e = mid;
        }
    }           
        return s;
}
int searchInRotatedAndSortedArray(int nums[],int size,int target){
        int s = 0;
        int e = size - 1;
        int pivot ;
        int m = s+ (e-s)/2;
        if (size==2){
            if (nums[0]>nums[1]){
                pivot = 1;
            }
            else{
                pivot = 0;
            }
        }
        else{
        while(s<e){
                                                                                                                                
            
            if (nums[m]>=nums[0])
            {
                s = m + 1 ;
            }
            else{
                e = m;
            }
            m = s+ (e-s)/2;
        }           
        pivot = e;
        } 
        
        cout<<"pivot @ "<<pivot<<endl;   


        int start = 0;
        int end = 0;
        if (nums[pivot] < target < nums[size-1]){
            start = pivot;
            end = size-1;
        }
        else{
            end = pivot-1;
        }
        int mid = (end + start)/2;
        while(start<=end){
            cout<<"start:"<<start<<"\n";
            cout<<"end:"<<end<<"\n";
            cout<<"mid:"<<mid<<"\n";
            if (nums[mid]==target){
            return mid ;    
            }
            if (nums[mid]<target){
            start = mid+1;
            }
        
            if (nums[mid]>target){
            end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return -1 ;    
}
int Sqrt(int x) {
        int start = 0;
        int end = x;
        long long int mid = start+(end-start)/2;
        long long int ans = -1;
        while(start<=end){
            long long int square = mid*mid;
            if (square == x){
                return mid;
            }
            if(square < x){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start+(end-start)/2;
        }
        return ans;
}
double morePrecise(int n , int Precision, int tempSol){
    float factor = 1;
    double ans = tempSol;
    cout<<"entering loop\n";
    for (int i=0; i<Precision; i++){
        factor /= 10;
        cout<<"Factor= "<<factor;
        
        for (double j=ans; j*j < n ; j=j+factor){
            ans = j;
            cout<<"\nj = "<<j;
        }
    }
    return ans;
}
int main (){
    int arr1[] = {4,5,6,7,0,1,2};
    int arr2[] = {1,3,5};
    //cout<<"element 0 in arr1 at index :"<<searchInRotatedAndSortedArray(arr1,7,0)<<endl;
    //cout<<"element 3 in arr2 at index :"<<searchInRotatedAndSortedArray(arr2,3,1 )<<endl;
    int tempSol = Sqrt(28);
    double finalSol = morePrecise(28,4,tempSol) ;
    
    cout<<"final answer is :"<<finalSol;
    /*
    for(double i = 100 ; i>=0;i-- ){
        cout<<i/10<<endl;
    }
    */


}