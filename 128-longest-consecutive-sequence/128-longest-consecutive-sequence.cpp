class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>holder(nums.begin(),nums.end());
        int length=0;
        for(auto i:holder)
        {
            int temp_length=0;
            if(holder.find(i-1)==holder.end())
            {
                while(holder.find(i+temp_length)!=holder.end())
                    temp_length+=1;
                length=max(length, temp_length);
            }
        }
        
        return length;
    }
};