int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int s = firstOcc(nums, nums.size(),target);
        if(s==-1){
            return ans;
        }
        int e = lastOcc(nums, nums.size(),target);
        for(int i=s; i<=e; i++){
            ans.push_back(i);
        } 
        return ans;
    }
};
