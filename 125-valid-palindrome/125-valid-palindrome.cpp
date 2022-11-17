class Solution {
public:
    bool isPalindrome(string s) {
        string test;
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
            if(iswalnum(s[i]))
                test+=s[i];
        }
        cout<<test<<endl;
        for(int i=0;i<(test.length()/2);i++)
        {
            if(test[i]==test[test.length()-1-i])
                continue;
            else 
                return false;
        }
        return true;
    }
};