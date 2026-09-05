class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashtable;
        for(int i = 0 ; i < nums.size(); i++){
            hashtable[nums[i]]++;
        }
        vector<pair<int, int>> arr(hashtable.begin(), hashtable.end());
        sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });
        vector<int> ans;
        int n = arr.size();
        for (int i = n - 1; i >= n - k; i--) {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};
