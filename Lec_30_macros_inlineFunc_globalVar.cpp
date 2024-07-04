 #include<iostream>
using namespace std;
void print(int arr [], int size, int start=0){
    for(int i = start; i<size; i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    print(arr,5,3);
    cout<<"\n";print(arr,5);
}
/*
inline int getMax(int &a, int &b){
    return (a>b) ? a : b;
}
//#define pi 3.14

int score = 25;
int a(int &i){
    cout<<i<<endl;
    cout<<"Score in a:"<<score;;
}

int b(int &i){
    //cout<<i;
    
    cout<<"\nScore in b:"<<score;;
}

int main(){
    int a = 2;
    int b = 10;
    int ans = getMax(a,b);
    cout<<" a vs b :"<<ans;
    
    a*=10;

    ans = getMax(a,b);
    cout<<" a vs b :"<<ans;
    

    //cout<<"Area of circle :"<<pi*2*2;
    /*
    int i = 5;
    a(i);
    b(i);
    
    cout<<"\nScore in main:"<<score;
    
}
*/
