class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first=0,second=0;
        for (int i=0; i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]  ==  target)
                {
                    first=i,second=j;
                    cout<<first<<endl;
                    cout<<second<<endl<<endl;
                    break;
                }
            }
        }
        vector<int> ans;
        if(first==0 && second==0)
        {
            return ans;
        }
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};