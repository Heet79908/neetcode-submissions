class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        for(int i=0; i<n; i++) {
            ans += to_string(strs[i].size());
            ans += '#' + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        int n = s.size();
        vector<string> ans;
        int i=0;
        while(i<n) {
            int j = i;
            while(s[j]!= '#') j++;
            int len = stoi(s.substr(i,j-i));
            string curr = s.substr(j+1,len);
            ans.push_back(curr);
            i = j+1+len;
        }
        return ans;
    }
};
