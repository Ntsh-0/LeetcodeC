/*
Date - 29/oct/2026
Problem Link - https://leetcode.com/problems/two-sum/description/

Problem Statement
1. Two Sum
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 2 + 7 = 9, which equals the target. Therefore, the indices [0, 1] are returned.

Example 2:

Input: nums = [3,2,4], target = 6

Output: [1,2]

Explanation:

The sum of nums[1] and nums[2] is 2 + 4 = 6, which equals the target. Therefore, the indices [1, 2] are returned.

Example 3:

Input: nums = [3,3], target = 6

Output: [0,1]

Explanation:

The sum of nums[0] and nums[1] is 3 + 3 = 6, which equals the target. Therefore, the indices [0, 1] are returned.

 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists

*/

//Code 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 //there is one more method to do this in o(nlog(n)) using sorting like quick sort, merge sort
 //then use two pointers approach to find  the answer

//Brute force approach o(n^2)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    int *arr = (int *)malloc(sizeof(int)*2);
    *returnSize = 2;

    for(i=0; i<numsSize-1; i++) {
        for(j=i+1; j<numsSize; j++) {
            if ( (nums[i] + nums[j]) == target) {
                arr[0] = i; arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}
