#include<iostream>
using namespace std;
int main(){
    
    /*
    int row ;
    cin>> row;
    
    int col ;
    cin>> col;
    int **arr = new int* [row]; //this creates a new arr of pointers to 
    for(int i =0; i<row;i++){
        arr[i] = new int[col];
    }
    //created new arr
    //taking i/p
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cin >> arr[i][j];
        }
    }
    //printing elements
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    //clearing heap 
    for(int i=0 ; i<row; i++){
        delete []arr[i]; 
    }
    delete []arr;
    */
   // jagged array
   int row ;
   cout<<"Rows of array:";
   cin >> row;
   int cols[20];
   for(int j=0; j<row;j++){
        cin >> cols[j];
    }
    int** arr = new int*[row];
    for(int i=0; i<row;i++){
        arr[i] = new int[cols[i]];
    }
    //taking i/p
    for(int i=0; i<row;i++){
        for(int j=0; j<cols[i];j++){
            cin >> arr[i][j];
        }
    }
    //printing elements
    for(int i=0; i<row;i++){
        for(int j=0; j<cols[i];j++){
            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;




    return 0;
}