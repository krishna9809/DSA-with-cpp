// 767. Reorganize String

class Solution {
public:
    string reorganizeString(string s) {
       vector<int>f(26,0);
       int n=s.size();
       for(int i=0;i<s.size();i++){
           f[s[i]-'a']++;
        if(f[s[i]-'a']>(n+1)/2)
        return "";
       }
       priority_queue<pair<int,char>>p;
       for(int i=0;i<26;i++){
        if(f[i]!=0){
            p.push({f[i],(char)i+'a'});
        }
       }
       string ans="";
       while(p.size()>=2){
           pair<int,char>p1=p.top();
           p.pop();
           pair<int,char>p2=p.top();
           p.pop();
           ans+=p1.second;
           ans+=p2.second;
           if(p1.first>1){
           p.push({p1.first-1,p1.second});
           }
           if(p2.first>1){
             p.push({p2.first-1,p2.second});
           }
       }
       if(p.size()==1)
        ans+=p.top().second;
       return ans;
    }
};