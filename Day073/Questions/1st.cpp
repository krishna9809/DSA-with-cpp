// 405 Add String

class Solution {
public:
    string addStrings(string num1, string num2) {
        int m = num1.size() , n = num2.size();
            int x = abs(m-n);
            string t = "";
      if(x!=0)
      {
        for(int i = 1; i<=x ;i++)
        {
          t+='0';
        }
        if(n>m) num1 = t+num1;
        else{
            num2 = t+num2;
        }
      }
      vector<int> res(num1.size()+1,0);
      int k = res.size()-1;
      for(int i = num1.size()-1 ; i>=0 ; i--)
      { 
        int val = (num1[i]-'0')+(num2[i]-'0')+res[k];
        if(val>=10)
        {
            int t = val-10;
            res[k] = t;
            k--;
            res[k]+=1;
        }
        else{
            res[k] = val;
            k--;
        }
      }
    int i = 0;
    string ans = "";
    if(res[k]==0 && res[k+1]==0) return "0";
    while(res[i]==0) i++;
    for( ;i<res.size();i++)
    {
        ans+=to_string(res[i]);
    }
    return ans;
}
};