class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int num: nums){
            mp[num] ++;
        }
        vector<pair<int,int>> s;
        for(auto &it : mp){
            s.push_back({it.second, it.first});
        }
        sort(s.begin(), s.end(), greater<pair<int, int>>());
        vector<int> a;
        for(int i=0; i < k; i++){
            a.push_back(s[i].second);
        }
        return a;
        
    }
};
