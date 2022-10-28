class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>holder;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            holder[temp].push_back(strs[i]);
            // cout<<holder[temp]<<endl;
        }
        for(auto i:holder)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};