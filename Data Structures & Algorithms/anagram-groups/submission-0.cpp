class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashtable;
        for(int i = 0 ;i < strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
           hashtable[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &pair:hashtable){
            ans.push_back(pair.second);
        }
    return ans;
    }
};
