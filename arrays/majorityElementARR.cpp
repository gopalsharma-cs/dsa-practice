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