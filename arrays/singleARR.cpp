// PROBLEM:Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.
// LINK:https://leetcode.com/problems/single-number/
// APPROACH: XOR every element in the array together. Since a number XORed with itself cancels to 0, all duplicate pairs cancel out, leaving only the single unique element as the result.
// TIME COMPLEXITY:O(n)
// SPACE COMPLEXITY:O(1)

#include<iostream>
using namespace std ;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* MY 1st Approach */
        // unordered_map<int,int> m;
        // for(auto p:nums){
        //     m[p]++;
        // }
        // for(auto p:m){
        //   if (p.second==1){
        //     return p.first;
        //   }         
        // }
        // return -1;

        /* NEW Approach Learned  XOR based optimal */
        int c=0;
        for(auto p:nums){
            c^=p; 
        }
        return c;
    }
};