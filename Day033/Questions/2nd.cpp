// 1910. Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string s, string part) {

        int pos = s.find(part);

        while(pos != string::npos){
            s.erase(pos, part.size());
            pos = s.find(part);
        }
        return s;

    }
};