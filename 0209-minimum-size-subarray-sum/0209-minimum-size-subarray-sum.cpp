class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int ans = INT_MAX;
        bool found = false;
        int sum = 0;
        for(int right = 0 ; right < n ; right++ ){
            sum+= nums[right];
            if(sum >= target){
                found = true;
                while(sum >= target){
                    sum -= nums[left];
                    ans = min(ans , right-left+1);
                    left++;
                }
            }
        }
   return found? ans : 0; }
};