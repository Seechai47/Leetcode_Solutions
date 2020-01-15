/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> dictionary = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
                                                    {'X', 10}, {'V', 5}, {'I', 1}};
        int res = 0;
        int pre = 0;
        for (auto cur : s) {
            res += dictionary[cur];
            if (pre && dictionary[cur] > dictionary[pre])
                res -= 2 * dictionary[pre];
            pre = cur;
        }
        return res;
    }
};
// @lc code=end

