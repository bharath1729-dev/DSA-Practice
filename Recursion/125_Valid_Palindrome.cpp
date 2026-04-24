// 125 Valid Palindrome

/*
A phrase is a palindrome if, 
after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
private:
    // Helper function to handle the recursion
    bool checkPalindrome(int left, int right, const string& s) {
        
        if (left >= right) {
            return true;
        }

        
        if (!isalnum(s[left])) {
            return checkPalindrome(left + 1, right, s);
        }

        
        if (!isalnum(s[right])) {
            return checkPalindrome(left, right - 1, s);
        }

        
        if (tolower(s[left]) != tolower(s[right])) {
            return false; // The streak is broken, kill the recursion!
        }

        
        return checkPalindrome(left + 1, right - 1, s);
    }

public:
    bool isPalindrome(string s) {
        
        return checkPalindrome(0, s.size() - 1, s);
    }
};