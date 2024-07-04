#include <iostream>
using namespace std;
bool isPresent(int arr[][4],int target, int row, int column){ // when passing 2D arrays at least number of columns should be specified for compiler to calculate space or something
    for(int i=0; i<row; i++){
        for(int j =0; j<4;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
void largestRowWiseSum(int arr[3][4]){
    int ans = 0;
    int sum = 0;
    int highestRow = -1;
    for(int i=0; i<3; i++){
        
        sum = 0;
        for(int j=0; j<4;j++){
            sum += arr[i][j];
        }
        
        cout<<"\nrow:"<<i<<" sum:"<<sum;
        if (sum>ans){
            ans = sum;
            highestRow = i;
        }
    }
    cout<<"\nlargest sum of row = "<<ans << "\tin row:"<<highestRow;
}
int main(){
    int arr[3][4];
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; // it goes in row wise
    int arr3[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    for(int row=0; row<3; row++){
        for(int col =0; col<4;col++){
            cout<<arr3[row][col]<<" ";
            
        }
        cout << endl;
    }
    /*
    for(int row=0; row<3; row++){
        for(int col =0; col<4;col++){
            cin>>arr[row][col];
        }
    }
    cout<<"printing arr:\n";
    for(int row=0; row<3; row++){
        for(int col =0; col<4;col++){
            cout<<arr[row][col]<<" ";
            
        }
        cout << endl;
    }
    */
   int arrNew [3][4];
   for(int row=0; row<3; row++){
        for(int col =0; col<4;col++){
            cin>>arrNew[row][col];
        }
    }
   int target;
   cout << "enter element to search:";
   cin>>target;
   //cout<<"is given number Present:"<<isPresent(arrNew,target,3,4);
   cout<<"row wise sum :";
   largestRowWiseSum(arrNew);
}
