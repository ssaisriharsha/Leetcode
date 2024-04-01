#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum2 = 0;
        for(int i = 0; i < accounts.size(); i++) {
            int sum1 = 0;
            accumulate(accounts[i].begin(), accounts[i].end(), 0, sum1);
            if (sum1 > sum2) {
                sum2 = sum1;
            }
        }
        return sum2;
    }
};


