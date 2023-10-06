// 205 Isomorphic Strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool IsChartMapped[256] = {0};

        for(int i = 0; i<s.size();i++){
            if(hash[s[i]] == 0 && IsChartMapped[t[i]] == 0){
                hash[s[i]] = t[i];
                IsChartMapped[t[i]] = true;
            }
        }

        for(int i = 0; i<s.size(); i++){
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }
        return true;
    }
};