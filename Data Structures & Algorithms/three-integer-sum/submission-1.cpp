class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        unordered_map<int,int> ump;
        for(int i =0;i<n;i++){
            int remSum = -1*nums[i];

            int left = i +1;
            int right = n-1;

            while(left<right){
                int currSum = nums[left]+nums[right];
                if(currSum == remSum){
                    ans.push_back({nums[i],nums[left],nums[right]});

                    while(left < right && nums[left] == nums[left+1])
                    left++;

                    while(left<right && nums[right] == nums[right-1]) 
                    right--;

                    left++;
                    right--;
                }
                
              
                if(remSum>currSum){
                    left++;
                }
                if(remSum<currSum){
                    right--;
                }
            }
            while(i<n-1 && nums[i] == nums[i+1]) i++;

        }
        return ans;
    }
};
