#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int numWays(vector<string> &words, string target)
    {
        int nW = words[0].size(); // length of each word
        int nT = target.size();   // length of target
        int ans = 0;
        int currW = 0;
        int curri = 0;
        return solve(words, target, nW, nT, currW, curri, ans);
    }

private:
    int solve(vector<string> &words, string &target, int nW, int nT, int currW, int curri, int &ans)
    {
        // Base case: if no target characters left, we've found a valid way
        if (nT == 0)
        {
            ans++;
            return ans;
        }

        // Base case: if no more words left or target cannot be formed
        if (currW >= words.size() || nW <= 0)
            return ans;
        if(curri >= nW-1){
            return ans;
        }
        
        // Check if the current character in the word matches the target character
        if (words[currW][curri] == target[target.size() - nT])
        {
            // If they match, try to move forward in the target
            for (int i = 0; i < words.size(); i++)
            {
                return solve(words, target, i, nT - 1, 0, curri + 1, ans);
            }
        }
        
        // Explore the next word in the current position
        return solve(words, target, nW, nT, currW + 1, curri, ans) + solve(words, target, nW, nT, currW, curri + 1, ans);
    }
};

int main()
{
    Solution solution;

    // Test case
    vector<string> words =  {"abba","baab"};
    string target = "bab";

    int result = solution.numWays(words, target);
    cout << "Number of ways: " << result << endl;

    return 0;
}
