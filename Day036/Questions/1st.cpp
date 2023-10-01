// Palindromic Substring

class Solution {

    int expand(string s, int i, int j){
        int count = 0;

        while (i >= 0 && j< s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }

        return count;
    }
public:
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            int odd = expand(s,i,i);
            count = count + odd;

            int even = expand(s,i,i+1);
            count = count + even;
        }
        return count;
    }
};