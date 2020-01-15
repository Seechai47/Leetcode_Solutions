/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long res = 0;
        long long tem = x;
        while (tem != 0) {
            res = res * 10 + tem % 10;
            tem /= 10;
        }

        return (res == x) ? true : false;
    }
};
// @lc code=end

