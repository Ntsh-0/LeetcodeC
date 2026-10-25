/*
Date - 23/oct/2026
Problem Link - https://leetcode.com/problems/count-the-digits-that-divide-a-number/submissions/2179772566/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
2520. Count the Digits That Divide a Number
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0.

 

Example 1:

Input: num = 7
Output: 1
Explanation: 7 divides itself, hence the answer is 1.
Example 2:

Input: num = 121
Output: 2
Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
Example 3:

Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
 

Constraints:

1 <= num <= 109
num does not contain 0 as one of its digits.

*/

//Code 
int countDigits(int num) {
    int i, count = 0;
    int temp = num;

    while (temp > 0) {
        int t = temp%10;

        if (num%t == 0)
            count++;
        
        temp /= 10;
    }
    return count;
}
