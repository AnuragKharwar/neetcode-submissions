class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> ump;
        for(auto it : nums) ump[it]++;
        int len = 0;

        for(auto it : nums){
            int currLen  = 1;
            while(ump.find(++it) != ump.end()) {
                currLen++;
            }

            len = max(len,currLen);

        }
        return len;
    }
};
