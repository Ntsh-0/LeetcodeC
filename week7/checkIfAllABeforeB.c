/*
Date - 21/nov/2026
Problem Link - https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/?envType=daily-question&envId=2026-11-24

Problem Statement
2124. Check if All A's Appears Before All B's
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.

 

Example 1:

Input: s = "aaabbb"
Output: true
Explanation:
The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
Hence, every 'a' appears before every 'b' and we return true.
Example 2:

Input: s = "abab"
Output: false
Explanation:
There is an 'a' at index 2 and a 'b' at index 1.
Hence, not every 'a' appears before every 'b' and we return false.
Example 3:

Input: s = "bbb"
Output: true
Explanation:
There are no 'a's, hence, every 'a' appears before every 'b' and we return true.
 

Constraints:

1 <= s.length <= 100
s[i] is either 'a' or 'b'.

*/

//Code 
bool checkString(char* s) {
    int i, flag = 0;

    for(i=0; s[i] != '\0'; i++){
        if (s[i] == 'a' && flag == 1)
            return false;
        else if (s[i] == 'b')
            flag = 1;
    }
    return true;
    
}
