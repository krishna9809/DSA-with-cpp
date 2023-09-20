// 268. Missing Number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numssum=0;
        int totalsum=0;

        for(int i=0;i<nums.size();i++)
        {
            numssum=numssum+nums[i];
        }
         //   totalsum=nums.size()*(nums.size()+1)/2;
        for(int i=1;i<=nums.size();i++)
        {
            totalsum=totalsum+i;
        }
    
        return totalsum-numssum;
        
    }
};