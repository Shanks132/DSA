#include <iostream>

#include <vector>
using namespace std;

vector<int> nextSmallerElementInefficient(vector<int> &arr, int n)
{
    // Write your code here.
    for(int i = 0; i<arr.size(); i++){
        int e = arr[i];
        int ans = -1;
        for(int j = i ; j<arr.size(); j++){
            if(arr[j]<e){
                // cout<<"check\n";
                ans = arr[j];
                break;
            }
        }
        arr[i] = ans;
        
    }
    return arr;
}