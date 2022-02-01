class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        
        int s =1;
        int e = x/2;
        int ans=-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            int sq= x/mid;
            
            if(sq==mid && sq*mid==x)
                return mid;
            else if(sq<mid){
                e=mid-1;
            }
            else{
                ans = mid;
                s = mid+1;
            }
 
        }
        return ans;        
    }
};
