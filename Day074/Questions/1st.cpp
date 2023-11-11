// 1910 Remove All OCcuraence of A subarray 

class Solution {
public:

    void RemoveOccurRE(string &s,string &part){
      
      int found = s.find(part);

      if(found != string::npos){
          string left = s.substr(0,found);
          string right = s.substr(found+part.size(),s.size());

          s = left + right;

          RemoveOccurRE(s,part);
      }

      else{
          return;
      }
    }
    string removeOccurrences(string s, string part) {
        RemoveOccurRE(s,part);
        return s;
    }
};