#include <iostream>
using namespace std;    
void reachHome(int src, int dest){
    cout<<"\nsrc :"<<src <<" destination: "<<dest;
    //base case
    if(src==dest){
        cout<<"\npahuch gaya ";
        return ;
    }
    // ek kadam aage
    src++;
    //wapas dekh kitne kadam hai
    reachHome(src,dest);
    
    
}
int fibonacchi(int n){
    if (n==1){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return (fibonacchi(n-1)+fibonacchi(n-2));
}
int countDistinctWayToClimbStairs(long long n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = countDistinctWayToClimbStairs(n-1)+
    countDistinctWayToClimbStairs(n-2);
    return ans;
}
string DigitToZero(int n){
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    for(int i=0;i<10;i++){
        if(n==i){
            return arr[i];
        }
    }
}
void sayDigits(int n){
    if(n==0){
        return ;
    }
    
    sayDigits(n/10);
    int digit = n%10 ;
    string text = DigitToZero(digit);
    cout<<text<<" ";
}
int main(){
    /*
    int src = 1;
    int dest = 10;
    reachHome(src,dest);
    */
   //cout<<fibonacchi(3);

   //cout<<countDistinctWayToClimbStairs(4);
   sayDigits(412);
}