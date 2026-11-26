/*
Date - 16/nov/2026
Problem Link - https://leetcode.com/problems/find-if-digit-game-can-be-won/submissions/2179801797/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
3232. Find if Digit Game Can Be Won
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given an array of positive integers nums.

Alice and Bob are playing a game. In the game, Alice can choose either all single-digit numbers or all double-digit numbers from nums, and the rest of the numbers are given to Bob. Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.

Return true if Alice can win this game, otherwise, return false.

 

Example 1:

Input: nums = [1,2,3,4,10]

Output: false

Explanation:

Alice cannot win by choosing either single-digit or double-digit numbers.

Example 2:

Input: nums = [1,2,3,4,5,14]

Output: true

Explanation:

Alice can win by choosing single-digit numbers which have a sum equal to 15.

Example 3:

Input: nums = [5,5,5,25]

Output: true

Explanation:

Alice can win by choosing double-digit numbers which have a sum equal to 25.

 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 99


*/

//Code 
bool canAliceWin(int* nums, int numsSize) {
    int i, count1 = 0, count2 = 0;

    for (i=0; i<numsSize; i++) {
        if (nums[i] < 10)
            count1 += nums[i];
        else
            count2 += nums[i];
    }
    if ((count1 - count2) == 0)
        return false;
    else
        return true;
}
