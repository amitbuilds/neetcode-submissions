class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> p(n);
        vector<int> s(n);
        p[0]=1;
        for(int i = 1 ; i < n ;i++){
            p[i] = p[i-1]*nums[i-1];
        }
        s[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            s[i] = s[i+1]*nums[i+1];
        }
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            ans.push_back(p[i]*s[i]);
        }
    return ans;















        // int n = nums.size();
        // vector<int> prefix;
        // vector<int> suffix(n);
        // for(int i = 0 ; i < n; i++){
        //     int ans = 1;
        //     int j = i;
        //     while(j!=0){
        //         j--;
        //         ans = ans*nums[j];
        //     }
        //     prefix.push_back(ans);
        // }
        // for(int j = n-1; j >= 0; j--){
        //     int ans = 1;
        //     int k = j+1;
        //     while(k!=n){
        //         ans = ans*nums[k];
        //         k++;
        //     }
        //     suffix[j] = ans;
        // }
        // vector<int> f_ans;
        // for(int i = 0 ; i < prefix.size();i++){
        //     f_ans.push_back(prefix[i]*suffix[i]);
        // }
        // return f_ans;
    }
};
