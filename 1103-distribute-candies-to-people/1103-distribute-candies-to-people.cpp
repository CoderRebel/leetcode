class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people , 0);
        int i = 0 ; 
        int give =1 ;

        while(candies > 0){
            int actual = min(candies , give);
            ans[i] += actual;
            candies -= actual;
            i++;
            give++;
            if(i == num_people) i = 0;
         }
   return ans; }
};