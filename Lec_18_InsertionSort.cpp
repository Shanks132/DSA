#include<iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for (int i=1 ; i<n; i++){
        int temp = arr[i];
        int j=i-1;

        for (; j>=0;j--){
            //shift
            if (arr[j]>temp){
                arr[j+1] = arr[j];
            
            }
            else{
                break;
            }
            cout <<"temp = "<< temp <<"\n";
            for(int i=0; i<n; i++){
            cout<<" "<<arr[i]<<" ";
            }
            cout<<"\n";
        }
        arr[j+1]=temp;
    }
}
int main(){
    vector<int> arr = {10,1,7,4,8,2,11};
    insertionSort(7,arr);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
