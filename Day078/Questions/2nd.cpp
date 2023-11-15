// 983 Minimum Cost For Ticket

class Solution {
public:

  int mincostTicket_Helper(vector<int>& days, vector<int>& costs, int i){

      // base 

      if(i >= days.size()) return 0;

      //Day 1

      int cost1 = costs[0] + mincostTicket_Helper(days,costs,i+1);

      // Day 7

      int passEndDay = days[i] + 7 - 1;
      int j  = i;
      while(j < days.size() && days[j] <= passEndDay){
          j++;
      }

      int cost7 = costs[1] + mincostTicket_Helper(days,costs,j);

      // Day 30

      passEndDay = days[i] + 30 - 1;
      j  = i;
      while(j < days.size() && days[j] <= passEndDay){
          j++;
      }

      int cost30 = costs[2] + mincostTicket_Helper(days,costs,j);

      return min(cost1, min(cost7,cost30));
  }


    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTicket_Helper(days,costs,0);
    }
};