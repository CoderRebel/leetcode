class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int maxwords = 0 ;
      
       for(int  i = 0 ; i < sentences.size(); i++){
         int currwords = 1;
        for(int j = 0 ; j < sentences[i].size(); j++){
            if(sentences[i][j] == ' '){
                currwords++;
            }
        }
        maxwords = max(currwords , maxwords);
       } 
   return maxwords; }
};