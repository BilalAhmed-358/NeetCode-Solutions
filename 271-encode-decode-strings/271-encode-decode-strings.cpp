#include <bits/stdc++.h>

using namespace std;

class Codec
{
public:
    string encode(vector<string> &strs)
    {
        string a = "";
        for (int i = 0; i < strs.size(); i++)
        {
            a += to_string(strs[i].size()) + "$" + strs[i];
        }
        return a;
    }
    vector<string> decode(string &strs)
    {
        vector<string> ans;
        int i = 0;
        while (i < strs.length())
        {
            int j = i;
            while (strs[j] != '$')
            {
                j++;
            }
            // cout << "the value of j in the middle is " << j << " and the value of i is " << i << " and the total length of the string is " << strs.length() << endl;
            string length = strs.substr(i, j - i);
            // cout << "The value of length variable is " << length << endl;
            int length_num = stoi(length);
            // cout << "String being pushed in is " << strs.substr(j + 1, length_num) << endl;
            ans.push_back(strs.substr(j + 1, length_num));
            i = (j + 1 + length_num);
            // cout << "The val of i at the end of the loop is " << i << endl;
        }
        return ans;
    }
};

int main()
{
    vector<string> str = {"This", "is", "a", "sentence"};
    Codec one;
    cout << "Vector of strings after encryption" << endl;
    string test = one.encode(str);
    cout << test << endl;
    vector<string> decde;
    cout << "Vector of strings after decryption" << endl;
    decde = one.decode(test);
    for (auto s : decde)
    {
        cout << s << endl;
    }
}
