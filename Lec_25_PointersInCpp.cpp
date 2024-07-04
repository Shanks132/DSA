#include<iostream>
using namespace std;
int main(){ /*
    int num = 10;
    cout<<num<<endl;
   address of operator
    
    int *ptr = &num;
    cout<<"\nvalue at ptr is: "<<*ptr;
    cout<<"\nptr is: "<<ptr;
    cout << "\nsize of ptr: "<<sizeof(ptr)<<"\n\n";   
    int i = 5;
    int *p3 = &i;
    int *p2 = 0;
    cout << "\naddress p2 :"<<p3;
    cout << "\nvalue @ address:"<<*p3;
    int *p2 = 0;
    p2 = &i;
    cout << "\naddress p2 :"<<p2;
    cout << "\nvalue @ address:"<<*p2;
    
    */
    int i = 9;
    int *p = &i;
    cout<<"\nbefore:"<<i;
    (*p)++;
    cout<<"\nafter"<<i; 
    int *q = p; 
    cout<<p<<"--"<<q<<endl;
    cout<<*p<<"--"<<*q;
    //imporatant concept
    int *p4 = &i;
    *p4++;
    cout<<"\np4:"<<p4;
    

}