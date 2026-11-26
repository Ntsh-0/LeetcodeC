/*
Date - 31/oct/2026
Problem Link - https://leetcode.com/problems/score-of-parentheses/description/?envType=problem-list-v2&envId=awhn703r


Problem Statement
856. Score of Parentheses
Solved
Medium
Topics
premium lock icon
Companies
Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: s = "()"
Output: 1
Example 2:

Input: s = "(())"
Output: 2
Example 3:

Input: s = "()()"
Output: 2
 

Constraints:

2 <= s.length <= 50
s consists of only '(' and ')'.
s is a balanced parentheses string.

*/

//Code 
int scoreOfParentheses(char* s) {
    //Did it with this method in about time - 43 minutes 30 seconds this approaach came to my mind 10 min ago and it solved this problem easily
    
    /*New approach - sliding window
    1-see two at a time
    2-if first two are (( then increase multiplier by 2
    3-if two are () then add to score till now and move directly after )
    4-if )) decreasse multipler by 2
    5-we wont found this )(*/
    int i, multiplier = 1, maxScore = 0;
    int length = strlen(s);

    for(i=0; i<length-1; i++){
        if (s[i] == '(' && s[i+1] == '('){
            multiplier *= 2;
        }
        else if (s[i] == '(' && s[i+1] == ')'){
            maxScore += multiplier;
        }
        else if (s[i] == ')' && s[i+1] == ')'){
            multiplier /= 2;
        }
    }
    return maxScore;
}

// int scoreOfParentheses(char* s) {

//     //Fails for "((()()))"
//     int i, j, multiplier = 0, maxScore = 0, open = 0, score = 1, flag =0;

//     for(i=0; s[i] != '\0'; i++){
//         if (s[i] == '('){
//             flag = 1;
//             if (open == 0) {
//                 multiplier = 1;
//             }
//             else if(open>0) {
//                 multiplier = 2;
//             }
//             open++;
//             score *= multiplier;
//         }
//         else{
//             open--;
//             if (flag == 1)
//                 maxScore += score;
//             score = 1;
//             flag = 0;
//         }
//     }
//     return maxScore;
// }
//This ques cannot be that easy so i think s = ((())) willl have a score of 4 as 2*2*1 = 4;
    // int len = 0;
    // for(int i=0; s[i]!='\0'; i++) {
    //     if (s[i] == ')')
    //         len++;
    // }
    // return len;
