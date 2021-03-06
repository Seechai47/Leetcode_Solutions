/*
 * @lc app=leetcode id=187 lang=cpp
 *
 * [187] Repeated DNA Sequences
 *
 * https://leetcode.com/problems/repeated-dna-sequences/description/
 *
 * algorithms
 * Medium (37.48%)
 * Likes:    563
 * Dislikes: 225
 * Total Accepted:    143.1K
 * Total Submissions: 381.8K
 * Testcase Example:  '"AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"'
 *
 * All DNA is composed of a series of nucleotides abbreviated as A, C, G, and
 * T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to
 * identify repeated sequences within the DNA.
 * 
 * Write a function to find all the 10-letter-long sequences (substrings) that
 * occur more than once in a DNA molecule.
 * 
 * Example:
 * 
 * 
 * Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
 * 
 * Output: ["AAAAACCCCC", "CCCCCAAAAA"]
 * 
 * 
 */

// @lc code=start

#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<std::string> findRepeatedDnaSequences(std::string s) {
        std::unordered_map<std::string, int> hash;
        std::vector<std::string> res;

        for (int i = 0; i + 10 <= s.size(); i++) {
            std::string str = s.substr(i, 10);
            hash[str]++;
            if (hash[str] == 2) res.push_back(str);
        }

        return res;
    }
};
// @lc code=end

