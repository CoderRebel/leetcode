class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
            //first window
            int windowSum = 0;
            int n = nums.size();
            for(int i = 0  ; i< k ; i++){
                windowSum += nums[i];
            }
            int maxSum = windowSum;
            for(int i = k ; i < n ; i++){
                windowSum += nums[i] - nums[i-k];
                maxSum = max(maxSum , windowSum);
            }
            
            



  return (double)maxSum/k;  }
};