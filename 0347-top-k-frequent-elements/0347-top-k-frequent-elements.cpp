class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map <int , int> mpp;
        for(int i = 0 ; i< nums.size() ; i++){
            mpp[nums[i]]++;
        }
        vector<pair<int , int>> hash(mpp.begin() , mpp.end());
        sort(hash.begin() , hash.end() , [](const auto&a , const auto&b){
            return a.second > b.second;
        });
        for(int i = 0 ; i < k ; i++){
            ans.push_back(hash[i].first);
        }
    return ans;}
};