// 44 Wildcard macthing

class Solution {
public:
   
   bool isMatchHelper(string &s, int si,string &p, int pi){

        
        if(si == s.size() && pi == p.size()){
            return true;
        }

        if(si == s.size() && pi < p.size()){
            while(pi < p.size()){
                if(p[pi] != '*') return false;
                pi++;
            }
            return true;
        }


       if(s[si] == p[pi] || '?' == p[pi]){
           return isMatchHelper(s,si+1,p,pi+1);
       }

       if(p[pi] == '*'){
           bool caseA = isMatchHelper(s,si,p,pi+1);

           bool caseB = isMatchHelper(s,si+1,p,pi);

           return caseA || caseB;
       }


       return false;
   }


    bool isMatch(string s, string p) {
        int si = 0;
        int pi = 0;

        return isMatchHelper(s,si,p,pi);
    }
};
