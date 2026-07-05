class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int total_subsets = 1 << n; // 2^n
        vector<vector<int>> ans;
        
        // Loop from 0 to 2^n - 1 covers all subsets, including the empty set (num = 0)
        for (int num = 0; num < total_subsets; num++) {
            vector<int> current_subset;
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    current_subset.push_back(nums[i]);
                }
            }
            ans.push_back(current_subset);
        }
        
        return ans;
    }
};