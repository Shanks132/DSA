#include<iostream>
using namespace std;
int power(int a , int b){
    int ans = 1;
    for (int i = 1; i <= b;i++){
        ans = ans * a;
    }
    return ans;

}
int factorial(int a){
    int ans = 1,i = a;
    while(i != 1){
        ans = ans*i;
        i--;
    }
    return ans;
}


int nCr (int n , int r){
    int ans = factorial(n)/(factorial(r)*factorial(n-r)) ;
    return ans;
}

void trial(int n){
    n = n/2;
}


int main()
{
    int n = 22;
    trial(n);
    cout<<n<<endl;
  //cout<<power(15,2);
  //cout << nCr(6,5);
  /*
  int amount;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

      case 4: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
           }
           */
    return 0;
}
//eg:

