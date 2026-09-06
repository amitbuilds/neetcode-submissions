class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";

        for(string s:strs){
            encode+=to_string(s.length()) + "#" + s;
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i<s.length()){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            i = j+1;
            
            result.push_back(s.substr(i,len));
            i = i+len;
            
        }
        return result;
    }
};
