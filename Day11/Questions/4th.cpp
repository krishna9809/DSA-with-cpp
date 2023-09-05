// Majority Elements in an Array

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit  = n/2;
        int count = 0;

        for(int i = 0;i<n;i = i +count){
          for(int j = i; j<n;j++){
              if(nums[i] == nums[j]){
                  count++;
                  if(count>limit){
                      return nums[i];
                  }
              }
          }
        }
        return -1;

    }
};