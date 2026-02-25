class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int mini = min(word1.size(), word2.size());
        for(int i = 0; i < mini; i++){
            ans += word1[i];
            ans += word2[i];
        }

        int maxi = max(word1.size(), word2.size());
        if(maxi == word1.size()){
            for(int i = mini; i < maxi; i++){
                ans += word1[i];
            }
        }
        else{
            for(int i = mini; i < maxi; i++){
                ans += word2[i];
            }
        }

        return ans;
    }
};