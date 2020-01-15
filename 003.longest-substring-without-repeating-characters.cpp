/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int res = 0;

        for (int i = 0; i != s.size(); ++i) {
            std::unordered_map<char, int> hash;
            int temLength = 0;
            for (int j = i; j != s.size(); ++j) {
                hash[s[j]]++;
                if (hash[s[j]] == 2)
                    break;
                else
                    ++temLength;
            }
            res = std::max(res, temLength);
        }
        return res;
    }
};
// @lc code=end

