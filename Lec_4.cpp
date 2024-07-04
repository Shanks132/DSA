#include<iostream>
using namespace std;
int main(){
    float a ;
    //char ch ;
    
    /*
    cout<<"Enter to check if given input is lowercase uppercase number or special characters :";
    
    cin>> a ;
    if (a > 0){cout<<"number is +ve\n";}  
    else if (a>2){cout<<"number>2\n";}
    else if (a < 0){cout<<"number is -ve\n";}
    else {cout<<"number is 0\n";}
    
    cin >> ch;
    int b = ch;
    cout<<"ASCII VALUE:"<<b<<endl;
    if (b>=97 && b<=122){cout<<"given character is lowercase\n";}
    else if (b>=65 && b<=90){cout<<"given character is uppercase\n";}
    else if (b>=48 && b<=57){cout<<"given character is numeric\n";}
    else {cout<<"special character\n";}
    
   int n, result=0 , i=0 ;
   cout<<"sum of all even num till n:";
   cin >> n;
   while (i <= n){
       result+=i;
       i+=2;
   }
   cout<<result;
  
  //prime or not
   int num, i = 2;
   cin >> num ; 
   bool flag = 0 ;
   while (i<=num/2){
       if ( num%i == 0){
        cout<<"num is not prime";
        flag = 1;
        
       }
       i++; 
   }
   if (flag == 0){
    cout<<"NUMBER IS PRIMEEEEE";
   }
    
   int rows; // ------ horizontals
   int columns ; // ||||| vericals
   cout<<"Enter rows and columns:";
   cin>>rows>>columns;
   int i = 0, j = 0 ;
   while (i<rows){
        j=0;
        while (j<columns){
            cout<<i<<"\t";
            j++;
        }
        cout<<endl;
        i++;   
   }
   /*
   int rows,columns ;
   cout<<"Enter rows and columns:";
   cin>>rows>>columns;
   int i = 1, j = 1 ;
   int count = 1;
   char ch = 65;
   while (i<=rows){
        j=1;
        while (j<=columns){
            cout<< char(ch+rows-i+j-1) <<"\t";
            count ++;
            j++;
              
            
        }
        cout<<endl;
        i++;
   }
   */
   int rows,columns,spaces,stars ;
   cout<<"Enter rows and columns:";
   cin>>rows>>columns;
   int i = 1 , j = 1, k = 1  ;
   int count = 1;
   /*while (i<=rows){
    spaces = rows - i;
    stars = i ;
        while(spaces+1){
            cout<<" ";
            spaces --;
        }
        while (stars){
            cout<<"*";
            stars -- ;
        }
        cout<<endl;
        i++;
   } 
   
  while(i<=rows){
    j=1;
    while(j<=rows-i+1){
        cout<<"a\t";
        j++;
    }
    cout<<endl;
    i++;
  }
  */
 /*
 while (i<=rows){
    //spaces first
    spaces = i-1;
    while(spaces){
        cout<<" ";
        spaces--;
    }
    //stars
    stars = rows - i + 1;
    while (stars)
    {
        //cout<<"*";
        cout<<count;
        stars--;
    }
    count++;
    cout<<endl;    
    i++;
 }

    while(i<=rows){
        spaces = i-1;
        stars = rows - i +1;
        while (spaces){
            cout<<" ";
            spaces -- ;
        }

        while(stars){ 
            cout<<rows-stars+1;
            stars--;
        }
        cout<<endl;
        i++;
    }*/

    while (i<=rows){
        spaces = rows - i ;
        while (spaces){
            cout<<" ";
            spaces -- ;
        }
        j = 1;
        while(j<=i)
        {
            cout<<j;
            j++;             
        }
        j=1;
        while(j<i){
            cout<<i-j;
            j++;
        }
        //stars = i ;
        //while(stars-1){
        //    cout<<stars;
        //    stars --;
        //}

        //spaces = rows - i ;
        //while (spaces){
        //    cout<<" ";
        //    spaces -- ;
        //}
        cout<<endl;
        i++;

    }
    
   

   

} 