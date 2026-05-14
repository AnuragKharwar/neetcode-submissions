class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hasSeen;
        for(auto it : nums){
            if(!hasSeen.insert(it).second){
                return true;
            }
        }
        return false;
    }
};