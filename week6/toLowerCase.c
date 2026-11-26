/*
Date - 14/nov/2026
Problem Link - https://leetcode.com/problems/to-lower-case/submissions/2182264313/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
709. To Lower Case
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

 

Example 1:

Input: s = "Hello"
Output: "hello"
Example 2:

Input: s = "here"
Output: "here"
Example 3:

Input: s = "LOVELY"
Output: "lovely"
 

Constraints:

1 <= s.length <= 100
s consists of printable ASCII characters.

*/

//Code 
char* toLowerCase(char* s) {
    int i;
    int len = strlen(s);
    char *lowerCaseStr = (char *)malloc((len+1)*sizeof(char));

    for(i=0; i<len; i++) {
        //We do not have to write the if else as tolower() only translates the uppercase characters and leave the other things as it is. (got this improvement from ai) 
        if (s[i]>='A' && s[i]<='Z'){
            lowerCaseStr[i] = tolower(s[i]);
        }
        else{
            lowerCaseStr[i] = s[i];
        }
    }
    lowerCaseStr[i] = '\0';

    return lowerCaseStr;
}
