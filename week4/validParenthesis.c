/*
Date - 1/oct/2026
Problem Link - https://leetcode.com/problems/valid-parentheses/submissions/2169284260/?envType=daily-question&envId=2026-10-11

Problem Statement
20. Valid Parentheses
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

Example 5:

Input: s = "([)]"

Output: false

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/

//Code 
bool isValid(char* s) {
    int *stack = (int *)malloc(strlen(s)*sizeof(int));
    int top = -1, i;

    for (i=0; s[i] != '\0'; i++) {
        if (top == -1 && (s[i] == ')' || s[i] == '}' || s[i] == ']') ) {
            return false;
        }
        if (s[i] == '[' || s[i] == '{' || s[i] == '(') 
            stack[++top] = s[i];
        else if (s[i] == ')') {
            if (stack[top] == '(') 
                top--;
            else
                return false;
        }
        else if (s[i] == ']') {
            if (stack[top] == '[') 
                top--;
            else
                return false;
        }
        else if (s[i] == '}') {
            if (stack[top] == '{') 
                top--;
            else
                return false;
        }
    }
    if (top == -1)
        return true;
    else
        return false;
}
