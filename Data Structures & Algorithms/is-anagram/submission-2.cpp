class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
         vector<int> sfreq(26,0);
         vector<int> tfreq(26,0);

        if(n!=m) return false;

       for(int i =0;i<n;i++){
        sfreq[s[i]-'a']++;
        tfreq[t[i]-'a']++;
       }
        
    return sfreq == tfreq;
    }
};
