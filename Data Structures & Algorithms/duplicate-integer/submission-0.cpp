class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashtable;
      
        for(int i = 0 ; i< nums.size(); i++){
            hashtable[nums[i]]++;
            if(hashtable[nums[i]]==2){
                return true;
            }
        }

    
        return false;
    }
};