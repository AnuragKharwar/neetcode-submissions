class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, less<pair<int,int>>> pq; //freq,val -> pair
    unordered_map<int,int> ump;

    for(auto it :nums) ump[it]++;

    for(auto it : ump){  
            pq.push({it.second,it.first}); //{ freq , val}
    }
    vector<int> ans;
    while(!pq.empty() && k--){
        int top = pq.top().second; // value of high freq element
        pq.pop();
        ans.push_back(top);
    }

    return ans;
    }
};
