class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ;
        int  high = INT_MIN;
        int ans = -1;
        for(int i = 0 ; i < piles.size(); i++){
            if(high < piles[i]) high = piles[i];
        }

        while(low <= high){
            int mid = low + (high-low)/2;
            long long time = 0;
            for(int i = 0 ; i < piles.size(); i++){
                time += (double)(piles[i] + mid -1)/mid;
            }
            if(time <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
   return ans; }
};