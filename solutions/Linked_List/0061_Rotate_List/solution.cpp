/*
 * Problem ID: 61
 * Title: Rotate List
 * Difficulty: Medium
 * Topics: Linked List, Two Pointers
 * LeetCode URL: https://leetcode.com/problems/rotate-list/
 * Language: C++
 * Submission Date: 2026-06-22T10:18:22.613Z
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr)
            return head;
        int len = 1;
        ListNode* tail = head;
        while(tail->next){
            len++;
            tail = tail->next;
        }
        k %= len;

        if(k == 0) {
            tail->next = nullptr;
            return head;
        }
        tail->next=head;
        ListNode* newTail = head;
        for(int i = 0; i< len-k-1; i++) newTail = newTail->next;
        ListNode* newHead = newTail->next;

        newTail->next = nullptr;

        return newHead;
    }
};