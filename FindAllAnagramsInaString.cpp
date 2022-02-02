class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int ns = s.size(), np = p.size();
        if (ns<np) return {};
        vector<int> H_s(26,0), H_p(26,0);
        for (char ch: p) H_p[ch-'a']++;
        for (char ch: string(s.begin(),s.begin()+np)) H_s[ch-'a']++;
        vector<int> res;
        if (H_s==H_p) res.push_back(0);
        for (int i=1; i<=ns-np; i++)
        {
            char ch1 = s[i-1], ch2=s[i+np-1];
            H_s[ch1-'a']--;
            H_s[ch2-'a']++;
            if (H_s==H_p) res.push_back(i);
        }
        return res;
    }
};
