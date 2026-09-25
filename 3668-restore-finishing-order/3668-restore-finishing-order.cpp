class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map <int , int> mpp;
        vector<int> ans;
        for(int i = 0 ; i < friends.size() ; i++){
            mpp[friends[i]]++;
        }
        for(int i = 0 ; i < order.size(); i++){
            for(auto it : mpp){
                if(order[i] == it.first && it.second == 1){
                    ans.push_back(order[i]);
                    break;
                }
            }
        }
   return ans; }
};