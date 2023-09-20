// 2154. Keep Multiplying Found Values by Two


class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        sort(nums.begin(),nums.end());

        for(auto i : nums){
            if(original == i){
                original = original * 2;
            }
        }
        return original ;
    }
};