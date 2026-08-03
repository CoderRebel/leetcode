class Solution {
public:
    int maxVowels(string s, int k) {
        //first gotta make a window of k size
        int currVowel = 0;
        int  n = s.size();
        for(int i = 0 ; i < k ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                currVowel++;
            }}
            int maxVowel = currVowel;
            for(int i = k ; i < n ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                currVowel++;
            }
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                currVowel--;
            }
            maxVowel = max(currVowel , maxVowel);
            }
        
  return maxVowel;  }
};