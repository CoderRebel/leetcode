class Solution {
public:
    int candy(vector<int>& ratings) {
        int sum = 1 ;
        int i = 1 ;
        int n = ratings.size();
        while(i < n ){
            //if its a flat surface
            if(ratings[i] == ratings[i-1]){
                sum+=1;
                i++;
                continue;
            }
            int peak = 1;
            // if its an increasing slope
            while(i < n && ratings[i] > ratings[i-1]){
                peak+=1;
                sum+=peak;
                i++;
            }
            int down = 1;
            // if its a decreasing slope
            while(i < n && ratings[i] < ratings[i-1]){
                sum += down;
                i++;
                down++;
            }
            if(down > peak){
                sum+= (down - peak);
            }
        }
    return sum;}
};