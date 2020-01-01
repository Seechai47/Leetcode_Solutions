/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include <cstdlib>

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            // Special Cases
            if (rev < INT32_MIN / 10 || (rev == INT32_MIN / 10 && pop < -8)) return 0;
            if (rev > INT32_MAX / 10 || (rev == INT32_MAX / 10 && pop >  7)) return 0;
            rev = rev * 10 + pop;
            x /= 10;
        }
        return rev;
    }
};
// @lc code=end

