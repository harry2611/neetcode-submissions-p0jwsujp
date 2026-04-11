class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int prodR = 1;
        int prodL = 1;

        for(int i= nums.size()-1; i>=0; i--){
            ans[i] = prodR;
            prodR = prodR * nums[i];
        }
        for(int i =0; i<nums.size(); i++){
            ans[i] = ans[i] * prodL;
            prodL = prodL * nums[i];
        }
        return ans;
    }
};
