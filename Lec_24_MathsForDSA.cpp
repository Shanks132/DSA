#include <iostream>
int gcd(int a , int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if (a>b){
            b = b-a;
        }
        else{
            a = b-a;
        }
    }
    return a; 
}
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int result = 1;
	while(n>0){
        if(n & 1) { // if n odd
		 	result =(1LL* result * x%m)%m;
		}
		x = (1LL* (x)%m * (x)%m )%m;
		n = n>>1; //more optimal to right shift by 1 bit so its just divide by 2 

    }
	return result;
} 
int main(){
    return 0;
}