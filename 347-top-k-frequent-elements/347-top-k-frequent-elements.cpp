class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        vector<vector<int>> freq (nums.size()+1);
        unordered_map<int,int> freq_holder;
        int count=0;
        //O(N) time complexity
        for(int i=0;i<nums.size();i++)
        {
            freq_holder[nums[i]]++;
        }
        //O(N) time complexity
        for(auto i:freq_holder)
        {
            freq[i.second].push_back(i.first);
        }
        //2D Array traversal O(nums.size()+1 x freq[i].size) = O (N)
        for(int i=nums.size();i>=0;i--)
        {
               if(freq[i].size()!=0)
               {
                   for(int j=0;j<freq[i].size();j++)
                   {
                       ans.push_back(freq[i][j]);
                       cout<<freq[i][j]<<endl;
                       count++;
                       if(count==k)
                       {
                           return ans;
                       }
                        
                   }
               }
        }
        
        // overall time complexity O(N) + O(N) + O(N) = O (N)
        return ans;
    }
};