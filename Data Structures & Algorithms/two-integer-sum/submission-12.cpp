class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> temp(n);
        for(int i = 0; i < n; i++) {
            temp[i] = {nums[i], i}; 
        }
        
        sort(temp.begin(), temp.end()); 
        
        int l = 0, r = n - 1;
        while(l < r) {
            int sum = temp[l].first + temp[r].first;
            if(sum == target) {
                return {min(temp[l].second, temp[r].second), max(temp[l].second, temp[r].second)}; 
            }
            else if(sum < target) {
                l++;
            }
            else {
                r--;
            }
        }
        return {};
    }
};