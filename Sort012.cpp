//CODESTUDIO ->SORT012

void sort012(int *arr, int n)
{
   //   Write your code here
    int p=0,q=0,r= n-1;
    while(q<=r){
        if(arr[q]==0){
            swap(arr[p],arr[q]);
            p++;
            q++;
        }
        else if(arr[q]==1){
            q++;
        }
        else if(arr[q]==2){
            swap(arr[q],arr[r]);
            r--;
        }
    }
    
}
