class Solution {
public:
    int getgoal(vector<int> &nums , int k){
        if(k < 0) return 0;
        int n  = nums.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int sum = 0;
        while(r < n){
        sum += nums[r];
        if(sum > k){
            while(sum > k){
                sum -= nums[l];
                l++;
            }
        }    
         count -= r-l+1;
            r++;        
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
           nums[i] = nums[i]%2 == 0? 0 : 1;
        }
    return abs(getgoal(nums , k) - getgoal(nums , k-1));
    }
};