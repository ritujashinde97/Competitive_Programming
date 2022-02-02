class Solution {
public:
    bool isPerfectSquare(int num) {
        int start = 0 , end = num ; long long int mid = 0;
        while(start <= end){
            mid = start + (end-start)/2;
            long long int sq = mid * mid;
            
            if(sq == num)
                return true;
            else if(sq > num)
                end = mid- 1;
            else
                start = mid + 1;
        }
        return false;
        
    }
};
