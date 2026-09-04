class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hashtable1;
        unordered_map<char,int> hashtable2;
        int n = s.length();
        int m = t.length();
        if(n!=m){
            return false;
        }
        for(int i  = 0 ; i < n; i++){
            hashtable1[s[i]]++;
            hashtable2[t[i]]++;
        }
        if(hashtable1==hashtable2){
            return true;
        }
        return false;
    }
};
