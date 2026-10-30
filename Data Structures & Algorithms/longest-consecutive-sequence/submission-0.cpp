class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i=0 ;i<n; i++) {
            s.insert(nums[i]);
        }
        int max_len = 0;
        for(int i=0 ;i<n; i++) {
            if(s.find(nums[i]-1) == s.end()) {
                int num = nums[i];
                int curr_len = 1;
                while(s.find(num+1) != s.end()) {
                    curr_len++;
                    num++;
                }
                max_len = max(curr_len, max_len);
            }
        }
        return max_len;
    }
};
