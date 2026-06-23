/*
 * Problem ID: 25
 * Title: Reverse Nodes in k-Group
 * Difficulty: Hard
 * Topics: Linked List, Recursion
 * LeetCode URL: https://leetcode.com/problems/reverse-nodes-in-k-group/
 * Language: C++
 * Submission Date: 2026-06-23T05:59:58.612Z
 */

class Solution {
public:

    ListNode* reverseLinkedList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr) {

            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* getKthNode(ListNode* temp, int k) {

        k--;

        while(temp != NULL && k > 0) {
            temp = temp->next;
            k--;
        }

        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while(temp != NULL) {

            ListNode* kThNode = getKthNode(temp, k);

            if(kThNode == NULL) {

                if(prevLast)
                    prevLast->next = temp;

                break;
            }

            ListNode* nextNode = kThNode->next;

            kThNode->next = NULL;

            reverseLinkedList(temp);

            if(temp == head)
                head = kThNode;
            else
                prevLast->next = kThNode;

            prevLast = temp;

            temp = nextNode;
        }

        return head;
    }
};