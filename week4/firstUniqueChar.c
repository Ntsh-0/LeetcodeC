/*
Date - 1/nov/2026
Problem Link - https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
387. First Unique Character in a String
Solved
Easy
Topics
premium lock icon
Companies
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1

 

Constraints:

1 <= s.length <= 105
s consists of only lowercase English letters.

*/

//Code 
int firstUniqChar(char* s) {
    //m1 - brute force o(n^2)
    //m2 - hash map o(n)
    //m3 - counting sort(i guess this is the name)

    //m3
    int alphabets[26] = {0};
    int i, index;

    for(i=0; s[i]!='\0'; i++) {
        index = (int)s[i] - (int)'a';
        alphabets[index]++;
    }

    for(i=0; s[i]!='\0'; i++){
        index = (int)s[i] - (int)'a';
        if (alphabets[index] == 1)
            return i;
    }

    return -1;
}
