// 539. Minimum Time Difference

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minute;

        for(int i =0; i<timePoints.size() ; i++){
            string curr = timePoints[i];

            int hours = stoi(curr.substr(0,2));
            int minutes =stoi(curr.substr(3,2));

            int totalMin = hours*60 + minutes;
            minute.push_back(totalMin);
        }

        sort(minute.begin(),minute.end());

        int mini = INT_MAX;
        int n = minute.size();
        for(int i = 0;i<n-1;i++){
            int diff = minute[i+1] - minute[i];
            mini = min(mini,diff);
        }

        // THIS is THE GAME 

        int lastdiff1 = (minute[0] +1440) - minute[n-1];
        int lastdiff2 = (minute[n-1] - minute[0]);
        int lastDiff = min(lastdiff1,lastdiff2);
        mini = min(mini,lastDiff);
        return mini;
    }
};

