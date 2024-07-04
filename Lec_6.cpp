#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans = 0,i = 0 ;
    cin>>n;
    while(n!=0){
        int bit = n & 1 ;
        cout<<bit<<endl;
        ans = ans + (bit * pow( 10, i ));
        //cout<<"\t"<<ans;
 
        i++;
        n = n>>1;
    }
    cout<<"ans:"<<ans;
}