class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int n = heights.size();
        int right = n-1;

        int maxWater = 0;
        while(left<right){
            int dis = right - left;
            int minHeight = min(heights[left],heights[right]);
            maxWater = max(maxWater,minHeight*dis);

            if(heights[left]<heights[right]) left++;
            else right--;
        }

        return maxWater;
    }
};
