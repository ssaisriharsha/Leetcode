#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0) {
            std::string str = to_string(x);
            auto rbit = str.rbegin();
            auto rend = str.rend();
            string str2;
            for(rbit; rbit!=rend; rbit++) {
                str2 += *rbit;
            }
            return str==str2?true:false;
        }
        else return false;
    }
};