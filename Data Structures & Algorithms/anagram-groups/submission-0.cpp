class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> ump;
        
        vector<vector<string>> ans;
        for(auto it : strs){
            vector<int> freq(26,0);
            for(auto c : it){
                freq[c-'a']++;
            }
            
        ump[freq].push_back(it);
             
        }

        for(auto it :ump){
            ans.push_back(it.second);
        }

        return ans;
    }
};
