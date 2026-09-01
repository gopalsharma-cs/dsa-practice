// PROBLEM:Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// LINK:https://leetcode.com/problems/majority-element/

// APPROACH:Traverse the array once and build an unordered_map counting the frequency of each element. Then traverse the map to find the element with the maximum frequency and return it.
// TIME COMPLEXITY: O(n)
// SPACE COMPLEXITY: O(n)
#include<iostream>
#include<climits>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> u;
        for(auto p:nums){
            u[p]++;
        }
        int max=INT_MIN;
        pair<int,int> c;
        for(auto p:u){
            if(p.second>max){
                max=p.second;
                c=p;
            }   
        }
        return c.first;
    }
};