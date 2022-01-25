class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> ans;
        
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;                    // count frequency of element
        
        for(auto j=m.begin();j!=m.end();j++)
              ans.insert(j->second);                 // store frequency of element 
        
        return ans.size()==m.size()?true:false;
        
    }
};
