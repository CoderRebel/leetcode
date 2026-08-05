class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans;
        int low = 1;
        int high = INT_MIN;
        for(int i = 0 ; i < piles.size() ; i++){
            if(piles[i] > high) high = piles[i];
        }
        //now we have low and high 
        while(low <= high){
            int mid = low + (high - low)/2;
            //can koko finish before time at speed mid
            long long time = 0;
            for(int i = 0 ; i < piles.size(); i++){
                time += (piles[i]+mid-1)/mid;
            }
            if(time <= h){
                ans = mid;
                high = mid - 1;
            }
            //if not
            else{
                low = mid + 1;
            }
        }
   return ans; }
};