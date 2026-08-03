class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size());
        int count = 0;
       int n = nums.size();
       prefix[0] = nums[0];
       for(int i = 1 ; i < n ; i++){
        prefix[i] = prefix[i-1] + nums[i];
       } 
       int sum = 0;
        for(int l = 0 ; l < n ; l++){
            for(int r = l ; r < n ; r++){
                
                if(l == 0 ) sum = prefix[r];
                else {
                    sum = prefix[r] - prefix[l-1];
                }
                if(sum == k){ count++;
                
                }}
            
        }

   return count; }
};