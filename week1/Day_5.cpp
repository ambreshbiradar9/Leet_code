/*
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/

class Solution {
public:
    int firstUniqChar(string s)
    {
        int n=s.size();
        unordered_map <char,int> mm;
        for(int i=0;i<n;i++)
        {
            mm[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mm.find(s[i])!=mm.end())
            {
                if(mm[s[i]]==1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};