class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> mpp;
        for(int i=0 ;i<n; i++) {
            string copy = strs[i];
            sort(copy.begin(),copy.end());
            if(mpp.find(copy) != mpp.end()) mpp[copy].push_back(strs[i]);
            else mpp[copy] = {strs[i]};
        }
        vector<vector<string>> ans;
        for(auto &it: mpp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
