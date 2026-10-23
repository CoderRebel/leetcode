class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size() ,1);
        int n = ratings.size();
        //checking for neighbors having higher rating than their left neighbor
        for(int i = 1 ; i < n ; i++){
            if(ratings[i] > ratings[i-1]){
                candies[i] = max(candies[i] , candies[i-1] + 1);
            }
        }
        // checking for neighbors having higher rating than their right neighbor
        for(int i = n-2 ; i >= 0 ; i--){
            if(ratings[i] > ratings[i+1]){
                candies[i] = max(candies[i] , candies[i+1]+1);
            }
        }
        int total = 0;
        for(int i = 0 ; i < n ; i++){
            total += candies[i];
        }
    return total; }
};