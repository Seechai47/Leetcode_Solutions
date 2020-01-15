/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        auto iter = str.begin(), end = str.end();
        int res = 0, sign = 1;

        while (iter != end && *iter == ' ') ++iter;

        if (*iter == '+') {
            iter++;
        } else if (*iter == '-') {
            iter++;
            sign = -1;
        }

        if (*iter < '0' || *iter > '9') return 0;

        while (*iter >= '0' && *iter <= '9') {
            int val = *iter++ - '0';
            if (res * sign < INT_MIN / 10 || (res * sign == INT_MIN / 10 && val > 7)) return INT_MIN;
            if (res * sign > INT_MAX / 10 || (res * sign == INT_MAX / 10 && val > 7)) return INT_MAX;
            res = res * 10 + val;
        }

        return res * sign;
    }
};
// @lc code=end

