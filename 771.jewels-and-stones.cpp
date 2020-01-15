/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        std::unordered_set<char> hash;
        int res = 0;

        for (const auto& j : J) hash.insert(j);
        for (const auto& s : S)
            if (hash.count(s)) ++res;

        return res;
    }
};
// @lc code=end

