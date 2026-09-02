class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = 0;
        int target;
        int n = nums.size();
        long long sum = 0;
        int ans = 1;
        for(right = 0 ; right < n ; right++){
            target = nums[right];
            sum += nums[right];
            long long cost = 1LL * target * (right - left + 1) - sum;
            while(cost > k){
                 sum -= nums[left];
                left++;
                cost = 1LL * target * (right - left + 1) - sum;
            }
            if (cost <= k) {
                ans = max(ans, right - left + 1);

            }
        }
        return ans;
    }
};