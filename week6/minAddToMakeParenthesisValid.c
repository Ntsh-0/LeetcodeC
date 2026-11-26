/*
Date - 17/nov/2026
Problem Link - https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/2169362354/?envType=daily-question&envId=2026-10-11

Problem Statement
921. Minimum Add to Make Parentheses Valid
Solved
Medium
Topics
premium lock icon
Companies
A parentheses string is valid if and only if:

It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.

 

Example 1:

Input: s = "())"
Output: 1
Example 2:

Input: s = "((("
Output: 3
 

Constraints:

1 <= s.length <= 1000
s[i] is either '(' or ')'

*/

//Code 
int minAddToMakeValid(char* s) {
    int i, len = strlen(s), top = -1;
    int *stack = (int *)malloc(len*sizeof(int));
    int min = 0;

    for (i=0; i<len; i++) {
        if (top == -1 && s[i] == ')' ) {
            min += 1;
        }
        else if(s[i] == '(') {
            stack[++top] = s[i];
        }
        else if (s[i] == ')' && top != -1) {
            if (stack[top] != '(') {
                min+=1;
            } 
            else{
                top--;
            }
        }
        else {
            min +=1;
        }
    }
    return (min+top+1);
}
    //Old code
    // //This program is correct (i guess) only for matching if there are same number of brackets present or not. it tells how many brackets are needed to make it equal
    // //This program does not take the rules of bracket into account like s = '()))(('
    // //The answer should be 4 but the program will show 0.
    //int len = strlen(s);
    //int top = -1, i;    
    //int stack[len];
    // for (i=0; i<len; i++) {
    //     if (s[i] == ')')
    //         stack[top++] = s[i];
    // }
    // for (i=0; i<len; i++) {
    //     if (top == -1) {
    //         return len;
    //     }
    //     if (s[i] == '(')
    //         top--;
    // }
    // return top;
