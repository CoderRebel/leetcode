class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLength = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ;i++ ){
            nums[i] = nums[i]== 0? -1 : 1;
        }
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n ; i++){
            prefix[i] = nums[i] + prefix[i-1];
        }
       unordered_map<int,int> mpp;
       //like now traverse the prefix array , take the prefix[i] and check if it exists in map if yes the do the maxlenght = max maxlength , i - mpp.first (am assuming mpp.first stores the index at which this was encountered the first time and mpp.second would be the value of that particular prefix sum) if it doesnt exist then insert it into the map 
       mpp[0] = -1;
        for(int i = 0 ; i < n ; i++){
            if(mpp.find(prefix[i]) != mpp.end()){
                maxLength = max(maxLength , i - mpp[prefix[i]]);
            }
            else{
                mpp[prefix[i]] = i;
            }
        }

    return maxLength;}
};