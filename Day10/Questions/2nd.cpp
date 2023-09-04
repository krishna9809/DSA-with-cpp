// Ques 1822 ==> Sign of the Product 

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0;
        for(int i = 0; i< nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            else if(nums[i] < 0){
                neg++;
            }
        }
        if(neg%2==0){
            return 1;
        }
        else{
            return -1;
        }
        return 1;
    }
};