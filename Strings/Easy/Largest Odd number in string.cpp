#include<bits/stdc++.h>
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();

        for (int i = n - 1; i >= 0; i--) {
            int digit = num.at(i) - '0';
            if (digit % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }

        return "";
    }
};