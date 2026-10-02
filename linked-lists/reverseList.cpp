// PROBLEM: Given the head of a singly linked list, reverse the list, and return the reversed list.

// LINK: https://leetcode.com/problems/reverse-linked-list/

// APPROACH: Use three pointers (prev, curr, nextNode). Traverse the list once; at each node, save the next node, point curr->next to prev, then move prev and curr one step ahead. When curr becomes nullptr, prev is the new head.
// TIME COMPLEXITY: O(n)
// SPACE COMPLEXITY: O(1)
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // preserve
            curr->next = prev;               // reverse link
            prev = curr;                     // advance prev
            curr = nextNode;                 // advance curr
        }

        return prev;
    }
};