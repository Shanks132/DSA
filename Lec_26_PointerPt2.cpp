#include<iostream>
using namespace std;
int print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p = p+1;
    *p = *p+3;
}
int main(){
    int value = 5;
    int *p = &value;
    cout<<"\nbefore update : ";
    print(p);
    update(p);
    cout<<"\nafter update using address in function: ";
    print(p);
    /*
    int arr[10] = {0,1,2,3,4};
    cout<<"address of zeroth memory block is :"<<arr;
    
    cout<<"\naddress of first memory block is :"<<&arr[1];
    
    cout<<"\nTrial : "<<&arr;
    cout<<"\nTrial : "<<*(arr+1);
    cout<<"\nTrial : "<<*arr + 1;
    cout<<"\nTrial : "<<*arr;
    cout<<"\nTrial : "<<2[arr]<<endl;
    int *ptr = arr;
    cout<<"sizeof(arr)"<<sizeof(arr)<<endl;
    cout<<"sizeof(ptr)"<<sizeof(ptr)<<endl;
    
    char arr2[6] = {'a','b','c','d','e'}; 
    cout << "char array: ";
    for(char ch:arr2){cout<<ch<<'\t';}
    char *ptr = &arr2[0];
    cout<<"\nptr: "<<ptr;
    cout<<"\n&arr2 : "<<&arr2;
    cout<<"\n*(arr2+1) : "<<*(arr2+1);
    cout<<"\n*arr2 + 1 : "<<*arr2 + 1;
    cout<<"\narr2 : "<<*arr2;
    cout<<"\n2[arr2] "<<2[arr2]<<endl;
    */

}