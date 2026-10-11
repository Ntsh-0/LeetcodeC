/*
Date - 7/oct/2026
Problem Link - https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&envId=math

Problem Statement
9. Palindrome Number
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1

*/

//Code 

bool isPalindrome(int x) {
    int temp = x;
    long int rev = 0;

    if (x >= 0) {
        while(temp > 0) {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        if (x==rev)
            return true;
    }
    return false;
}
