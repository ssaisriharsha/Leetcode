#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int rslt = 0;
        for (int i = 0; i < nums.size(); i++) {
            for(int j = 0; j <= i; j++) {
                rslt  += nums[j];
            }
            res.emplace_back(rslt);
            rslt = 0;
        }
        return res;
    }
};