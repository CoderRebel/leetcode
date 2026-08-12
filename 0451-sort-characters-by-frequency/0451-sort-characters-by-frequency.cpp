class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        unordered_map<char , int> mpp;
        for(int i = 0; i < s.size() ; i++){
            mpp[s[i]]++;
        }
        vector <pair<char , int>> hashArr(mpp.begin() , mpp.end());
        sort(hashArr.begin() , hashArr.end() , [](const auto&a , const auto&b){
            return a.second > b.second;
        });
        for(int i = 0 ; i < hashArr.size() ; i++){
            for(int j = 0 ; j < hashArr[i].second ; j++){
                ans.push_back(hashArr[i].first);
            }
        }

    return ans;}
};