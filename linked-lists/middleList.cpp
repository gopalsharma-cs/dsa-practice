// PROBLEM: Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

// LINK: https://leetcode.com/problems/middle-of-the-linked-list/

// APPROACH: Use two pointers, slow and fast. Slow moves one step and fast moves two steps at a time. When fast reaches the end (nullptr or last node), slow is at the middle.
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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next; // move 2 steps
            slow = slow->next;       // move 1 step
        }

        return slow;
    }
};