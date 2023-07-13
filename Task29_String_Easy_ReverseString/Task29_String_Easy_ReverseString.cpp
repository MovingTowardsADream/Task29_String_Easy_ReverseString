#include <iostream>
#include <vector>

class Solution {
public:
    static void reverseString(std::vector<char>& s) {
        std::reverse(s.begin(), s.end());
    }
};

int main()
{
    std::vector<char> str = { 'h','e','l','l','o'};
    Solution::reverseString(str);
}