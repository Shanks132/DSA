#include<iostream>
using namespace std ;
void update1(int n){
    n++;
}
void update2(int& n){
    n++;
}
int getSum(int *arr,int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {   
        sum+=arr[i];
    }
    return sum;    

}
int main(){
    int i = 5;
    //creating refernce variable for i = 5 
    /*
    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    
    cout<<"\nBefore:"<<i;
    update1(i);
    cout<<"\nAfter update_1: "<<i;
    update2(i);
    cout<<"\nAfter update_2: "<<i;
    */
   int n ;
   cout<<"give arr size :";
   cin>> n;
   cout<<"give elements:";
   // variable size array created
   int* arr = new int[n];
   for(int i = 0 ; i<n;i++){
        cin >> arr[i]; 
   }
   cout<<"\nthe sum is :"<<getSum(arr,n);


    
}