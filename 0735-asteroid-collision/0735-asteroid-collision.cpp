class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     stack<int> st;
    for(int x : asteroids){
        bool alive = true;

        while(!st.empty() && st.top() > 0 && x < 0){
            if(abs(st.top()) < abs(x)){
                st.pop();
            }

            else if(abs(st.top()) == abs(x)){
                st.pop();
                alive = false;
                break;
            }
            else{
                alive = false;
                break;
            }
        }
        if(alive){
            st.push(x);
        }
    }
vector<int> ans;
while(!st.empty()){
    ans.push_back(st.top());
    st.pop();
}
reverse(ans.begin() , ans.end());

return ans;



    }
};