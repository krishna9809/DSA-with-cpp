// 1047. Remove All Adjacent Duplicates In String

class Solution
{
public:
    string removeDuplicates(string s)
    {

        string result = "";
        int i = 0;

        while (i < s.size())
        {

            if (result.size() > 0)
            {
                if (result[result.size() - 1] == s[i])
                {
                    result.pop_back();
                }
                else
                {
                    result.push_back(s[i]);
                }
            }
            else
            {
                result.push_back(s[i]);
            }
            i++;
        }
        return result;
    }
};