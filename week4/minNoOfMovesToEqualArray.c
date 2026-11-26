/*
Date - 1/nov/2026
Problem Link - https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/submissions/2187874910/?envType=daily-question&envId=2026-11-02


Problem Statement
462. Minimum Moves to Equal Array Elements II
Solved
Medium
Topics
premium lock icon
Companies
Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment or decrement an element of the array by 1.

Test cases are designed so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [1,2,3]
Output: 2
Explanation:
Only two moves are needed (remember each move increments or decrements one element):
[1,2,3]  =>  [2,2,3]  =>  [2,2,2]
Example 2:

Input: nums = [1,10,2,9]
Output: 16
 

Constraints:

n == nums.length
1 <= nums.length <= 105
-109 <= nums[i] <= 109

*/

//Code 
int minMoves2(int* nums, int numsSize) {
    //using median approach
    int i, j, temp, swapped;

    //Bubble sort
    for (i = 0; i < numsSize - 1; i++) {
        swapped = 0;
        for (j = 0; j < numsSize - 1 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swapped = 1; 
            }
        }
        if (!swapped)
            break;
    }
    
    int median = nums[numsSize/2];
    //medain approach
    int sum = 0;
    for(i=0; i<numsSize; i++){
        sum += abs(median - nums[i]);
    }
    return sum;
}
