class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256 , -1);
        int l = 0;
        int r = 0;
        int maxLen = 0;
        int n = s.size();
        while(r < n)
        {
            // if the character we encountered exists in the hash array
            if(hash[s[r]] != -1){
                //if our window is past the place where the character was first seen
                if(hash[s[r]] >= l){
                    l = hash[s[r]] + 1;
                }
            }
           int len = r-l+1;
           maxLen = max(maxLen , len);
           hash[s[r]] = r;
           r++;
        }
    return maxLen;
    }
};