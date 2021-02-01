class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> seen;
        int n=nums.size();
        int i,flag=0;
        for(i=0;i<n;i++){
            if(seen.find(nums[i])!=seen.end()){
                flag=1;
                break;
            }
            seen.insert(nums[i]);
        }
        return nums[i];
        
    }
};

//also can be done using xor eg- A^A=0.
