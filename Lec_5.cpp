#include<iostream>
using namespace std;
int main(){
    /*
    int a = 5;
    int b = 6;
    
    cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    cout<<"a&b:"<<(a & b)<<endl;
    cout<<"~b:"<<(~ b)<<endl;
    cout<<"a^b:"<<(a ^ b)<<endl;
    cout<<"a|b:"<<(a | b)<<endl;

    cout<<(17>>2)<<endl;
    cout<<(19<<2)<<endl;
    

   //decrement and increment operators   
    int i = 7;
    cout<<i++<<endl; // o/p-7  i=8
    cout<<i--<<endl; // o/p-8  i=7
    cout<<++i<<endl; // o/p-8  i=8
    
    cout<<--i<<endl; // o/p-7  i=7
    
    int n1;
    cout<<"give n:";
    int i = 1 ;
    cin>>n1;
    cout<<"printing count from 1 to n:"<<endl;
    /*for(i = 1 ; i <= n ; i++){
        cout<<i<<endl;
    }
    
    i = 1;
    for(;;){
        if (i<=n){
        cout<<i<<endl;
    }
    else{
        break;
    }
    
    //fibbonacchi series
    int t1 = 0;
    int t2 = 1;
    int n;
    int t3 ;
    cout<<t1<<'\n'<<t2<<'\n';
    cout<<"how many terms do you want???";
    cin >> n ;
    cout<<t1<<'\n'<<t2<<'\n';
    for(int i=0; i<=n ; i++){
        t3 = t1+t2;
        cout<<t3<<endl;
        t1 =t2;
        t2 = t3;
    } 
    
    for (int i = 0 ; i <=5 ;i++){
        cout<<"Hi ";
        cout<<i;
        if (i == 4){
            continue;
        }
        cout << "  bye"<<endl;
    } 
   
   //variables and scopes
   int a = 3;
   cout<<"a-"<<a<<endl;
   if (true){
        int a = 5;
        cout<<"a:"<<a<<endl;  //int a =5 stars here and end inside this bracket only

   }
   int i = 10;
   cout<<"a-"<<a<<endl;

   for(int i = 0 ; i<8;i++){
       cout<<"hi \n";
   }
   cout <<"i:"<<i<<endl;
    
   int prod=1,sum=0,n,digit;
   cin>>n;
   while(n%10!=0){
      digit = n%10;
      prod=prod*digit;
      sum = sum + digit;
      n=n/10;
   }
   cout<<prod-sum<<endl;
   */
}
  int hammingWeight(uint32_t n){
  
    int count = 0;
    while (n!=0)
    {
        if(n&1){
            count ++;
        }
        n = n>>1;
    }     
    return count;
  }