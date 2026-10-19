/*
Date - 1/oct/2026
Problem Link - https://leetcode.com/problems/add-digits/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
258. Add Digits
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 

Follow up: Could you do it without any loop/recursion in O(1) runtime?

*/


//Code 

//function to add digits of a number constantly
int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

//function to check if sum of digits of number is less than 9 or is single digits
int addDigits(int num) {
    int sum = num;
    while (sum > 9) {
        sum = sumOfDigits(sum);
    }
    return sum;
}
