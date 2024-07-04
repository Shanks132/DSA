#include<iostream>
using namespace std;
int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int n, int m){
    if (m==0){
        return 1;
    }
    int smallerProblem = power(n,m-1);
    int biggerProblem = n*smallerProblem;
    cout<<" "<<biggerProblem;

    return biggerProblem;
    
}
void count(int n){
    if (n==0){return ;}
    cout<<n<<"\t";
    count(n-1);

}
void count2(int n){
   if (n==0){return ;}
   count2(n-1);
   cout<<n<<"\t";
   

}
int main(){
    //int n,m ;
    //cout<<"give number";
    //cin >> n  ;
    //cout<< "power:";
    //cin>>m;
    //int ans = factorial(n);
    //int ans = power(n,m);
    //cout<<ans<<endl;
    int n2 ;
    cin >> n2;
    count(n2);cout<<"\n\n"; 
    count2(n2);

}