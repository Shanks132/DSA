bool isPossible(int books[],int n,int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0 ; i<m ; i++){    
        if(pageSum+books[i]<=mid){
            pageSum += books[i];
        }
        else{
            studentCount ++;
            if (studentCount<=m || books[i]>mid){
                return false;
            }
        }
        pageSum = 0 ;
        pageSum = books[i] ;
    }
    return true;


}
int bookAllocationSums (int books[], int n, int m){
    int start = 0 ;
    int end = 0;
    int ans = -1; 
    for (int i = 0; i<=n; i++){
        end+=books[i];
    }
    int mid = start + (end-start)/2;
    while(start<=end){
        if (isPossible(books,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

    }
    return ans;

}