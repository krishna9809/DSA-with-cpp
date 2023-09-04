// Ques 896 ==> Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      int n=nums.size();
      if(n==0){
          return true;
          }
      int i;
        for(i =0;i<n-1;i++)
            {
                if(nums[i]>=nums[i+1])
                continue;
                else
                break; 
            }
            if(i==n-1)return true;
             for(i =0;i<n-1;i++)
            {
                if(nums[i]<=nums[i+1])
                continue;
                else
                break;
            }   
              if(i==n-1)return true;       
    return false;

    }
};