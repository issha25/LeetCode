class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n=intervals.size();
        if(n==1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        
        //we'll make non overlapping range in it and push it in the res
        vector<int>temp(2);    
        
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        for(int i=1;i<n;i++){
            if(temp[1]>=intervals[i][0]){
                temp[0]=min(temp[0],intervals[i][0]);
                temp[1]=max(temp[1],intervals[i][1]);
             }
            else{
                res.emplace_back(temp); 
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }
           
        }
        res.emplace_back(temp);
        return res;
        
    }
};
