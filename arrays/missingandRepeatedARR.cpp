// PROBLEM: You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n^2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.
// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

// LINK: https://leetcode.com/problems/find-missing-and-repeated-values/description/

// APPROACH: Created an unordered_map with possible values the matrix can have. While traversing the matrix, incremented the count of every element. Using an if condition on count, identified the repeated element (count == 2) and the missing element (count == 0).
// TIME COMPLEXITY: O(n*n)
// SPACE COMPLEXITY: O(n*n)

#include<iostream>
#include<climits>
#include<vector>
#include<pair>
#include<unordered_map>
using namespace std;


class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int> um;
        for(int i=1;i<=n*n;i++){
            um[i];
        }
        for (auto row : grid) { 
    for (auto val : row) {   
        um[val]++;
    }
}
        pair <int,int> pair1;
        pair <int,int> pair2;
        for(auto p:um){
            if (um[p.first]==2){ 
                pair1=p;
            }
            if(um[p.first]==0){
                pair2=p;
            }
        }
        vector <int> v={pair1.first,pair2.first};
        return v;
    }
};