// House Robber

class Solution {
public:
   
   int robs(vector<int> &nums, int i){
       if(i >= nums.size()){
           return 0;
       }

       int robAmt1 = nums[i] + robs(nums,i+2);
      int robAmt2 = 0 + robs(nums,i+1);

      return max(robAmt1,robAmt2);
   }

    int rob(vector<int>& nums) {

     
    return robs(nums,0);
    }
};