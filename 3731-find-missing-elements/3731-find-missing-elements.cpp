class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     sort(nums.begin() , nums.end());
     int n = nums.size();
     vector<int> ans;
     vector<int> hash(nums[n-1] + 1,0);
     for(int i = 0 ; i < n ; i++)
     {
        hash[nums[i]]++;
     }   
     for(int i = nums[0] ; i <= nums[n-1] ; i++ ){
        if(hash[i] == 0){
            ans.push_back(i);
        }
     }
  return ans;  }
};