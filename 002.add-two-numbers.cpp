/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode res(0), *cur = &res;

        int carry = 0;
        while (l1 != nullptr && l2 != nullptr) {
            cur->next = new ListNode((l1->val + l2->val + carry) % 10);
            carry = (l1->val + l2->val + carry) / 10;
            cur = cur->next;
            l1 = l1->next; l2 = l2->next;
        }

        while (l2 != nullptr) {
            cur->next = new ListNode((l2->val + carry) % 10);
            carry = (l2->val + carry) / 10;
            cur = cur->next;
            l2 = l2->next;
        }

        while (l1 != nullptr) {
            cur->next = new ListNode((l1->val + carry) % 10);
            carry = (l1->val + carry) / 10;
            cur = cur->next;
            l1 = l1->next;
        }

        if (carry != 0)
            cur->next = new ListNode(carry);

        return res.next;
    }
};
// @lc code=end

