#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            for(int j = nums.size() - 1; j > i; j--) {
                if(nums.at(i) + nums.at(j) == target) {
                    std::vector res = {i, j};
                    return res;
                }
            }
        }
        vector<int> res;
        return res;
    }
};