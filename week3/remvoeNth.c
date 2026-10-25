/*
Date - 25/oct/2026
Problem Link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/2180819160/?envType=problem-list-v2&envId=vmc6h6sm

Problem Statement
19. Remove Nth Node From End of List
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?

*/

//Code 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 int lengthLL(struct ListNode* temp) {
    int len = 0;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
 }

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp1 = head, *temp2 = head;
    int len = lengthLL(head) - n;

    if (len == 0) {
        return head->next;
    }

    while(len>0){
        temp1 = temp2;
        temp2 = temp2->next;
        len--;
    }

    temp1->next = temp2->next;

    return head;
}
