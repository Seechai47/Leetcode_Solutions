/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* currentNode = head;

        int count = 0;

        while (currentNode != nullptr) {
            currentNode = currentNode->next;
            ++count;
        }

        if (n == count) {
            ListNode* deleteNode = head;
            head = head->next;
            delete deleteNode;
        } else {
            int position = count - n - 1;
            currentNode = head;
            for (int i = 0; i != position; ++i)
                currentNode = currentNode->next;
            ListNode* deleteNode = currentNode->next;
            currentNode->next = currentNode->next->next;
            delete deleteNode;
        }

        return head;
    }
};
// @lc code=end

