#include<iostream>
using namespace std;
void update(int ** p2){
    //p2 = p2+1;
    //*p2 = *p2+1;
    //**p2 = **p2 +1;

}
int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    int arr[5];
    cout<<sizeof(arr)<<" "<<sizeof(p);
    /*
    cout<<"int i = "<<i<<"\n";
    cout<<"*p = "<<*p<<"\n";
    cout<<"**p2 = "<<**p2<<"\n";
    
    cout<<"\n*p2 = "<<*p2<<"\n";
    cout<<"&i = "<<&i<<"\n";
    cout<<"p = "<<p<<"\n";

    cout<<"\np2 = "<<p2<<"\n";
    cout<<"&p = "<<&p<<"\n";
    */
    cout<<"\nBefore:\n";
    cout<<"int i = "<<i<<"\n";
    cout<<"p = "<<p<<"\n";
    cout<<"p2 = "<<p2<<"\n";
    update(p2);
    cout<<"\nAfter:\n";
    cout<<"int i = "<<i<<"\n";
    cout<<"p = "<<p<<"\n";
    cout<<"p2 = "<<p2<<"\n";

}