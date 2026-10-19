/*
Date - 15/oct/2026
Problem Link - https://leetcode.com/problems/arranging-coins/description/

Problem Statement

Code
Testcase
Testcase
Test Result
441. Arranging Coins
Solved
Easy
Topics
premium lock icon
Companies
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.

 

Example 1:


Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
Example 2:


Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
 

Constraints

*/

//Code 

int arrangeCoins(int n) {
    //This method uses the formula of sum of n natural numbers
    //i took q as double as int was overflowing and i have to took 8.0 as well
    double q = 8.0*n;
    int k = (-1+sqrt(1+q))/2;
    return k;
}


//Time limit exceed for this question in this method thia ia o(n)
// int arrangeCoins(int n) {
//     int i, count = 0;
//     long int sum = 0;
//     for (i=1; i<=n; i++){
//         sum += i;
//         if (sum <= n) {
//             count++;
//         }
//     }
//     return count;
// }
