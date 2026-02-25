class Solution {
public:
    bool isSubsequence(string s, string t) {
        int point = 0;
        for(int i = 0; i < s.size(); i++){
            bool ok = false;
            for(int j = point; j < t.size(); j++){
                if(s[i] == t[j]){
                    ok = true;
                    point = j + 1;
                    break;
                }
            }
            if(ok == false){
                return false;
            }
        }
        return true;
    }
};