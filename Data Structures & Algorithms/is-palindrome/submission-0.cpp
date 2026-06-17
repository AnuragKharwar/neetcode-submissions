class Solution {
   public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            char chSt = s[start];
            char chEnd = s[end];

            if (!isalnum(chSt) || !isalnum(chEnd)) {
                if (!isalnum(chSt)) {
                    start++;
                    continue;
                }
                if (!isalnum(chEnd)) {
                    end--;
                    continue;
                }
            } else {
                if ((char)tolower(s[start]) != (char)tolower(s[end])) return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
