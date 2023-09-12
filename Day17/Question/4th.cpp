// 2798. Number of Employees Who Met the Target

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int work = 0;

        for(int i = 0; i<hours.size();i++){
            if(hours[i]>=target){
                work++;
            }
        }
        return work;
    }
};