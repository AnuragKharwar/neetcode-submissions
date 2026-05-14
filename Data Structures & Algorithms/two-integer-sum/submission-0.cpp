class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ump;
        vector<int> ans;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int remTarget = target - nums[i];
          
            if(ump.find(remTarget) != ump.end()){
                ans.push_back(ump[remTarget]);
                ans.push_back(i);
            }
            ump[nums[i]] = i;
        }

        return ans;
    }
};
