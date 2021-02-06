class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int diff=0;
        for(int i=0;i<prices.size();i++){
            if(min>prices[i])
                min=prices[i];
            else if(diff < prices[i]-min)
                diff=prices[i]-min;
        }
       return diff; 
    }
};
