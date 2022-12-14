class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            ans[i]=ans[i-1]*nums[i-1];
            // cout<<"Prefix is "<<ans[i]<<endl;
        }
        for(int i=nums.size()-1, suffix=1;i>=0;i--)
        {
            ans[i]*=suffix;
            // cout<<suffix<<endl;
            suffix*=nums[i];
        }
        return ans;
    }
};