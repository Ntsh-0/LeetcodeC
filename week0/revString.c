/*
Date - 1/oct/2026
Problem Link - https://leetcode.com/problems/reverse-string/?envType=problem-list-v2&envId=vpu8c115

Problem Statement
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.

*/

//Code 

void reverseString(char* s, int sSize) {
    //this can be done by two pointers change first and last element and do this till middle
    int i = 0, j = sSize-1;
    char temp = ' ';

    while (i<j) {
        temp = s[i];
        s[i] = s[j];
        s[j--] = temp;
        i++;
        //j--;
    }
}
