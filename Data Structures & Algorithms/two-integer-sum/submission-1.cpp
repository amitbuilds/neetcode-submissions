class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int , int> hashtable;
        for(int i = 0 ; i < nums.size();i++){
            
            int indeed = target - nums[i];

            if(hashtable.find(indeed) != hashtable.end()){
                return {hashtable[indeed],i};
            }
           
            hashtable[nums[i]] = i;
        }
        return {};
    }
};
