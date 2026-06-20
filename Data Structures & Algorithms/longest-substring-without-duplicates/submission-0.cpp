class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> ump;

        int st = 0;
        int n = s.size();
        int end = 0;
        int len = 0;
    
        while(end < n){
            if(ump.find(s[end]) != ump.end()){
               while(st <= end && ump.count(s[end])>0){
                   ump.erase(s[st]);
                   st++;
               }
            }
            len = max(len,end-st+1);
            ump[s[end]]++;
            end++;
        }
       
        return len;

    }
};




