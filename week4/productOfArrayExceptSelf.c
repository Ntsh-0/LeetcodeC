/*
Date - 30/oct/2026
Problem Link - https://leetcode.com/problems/product-of-array-except-self/submissions/2186257364/


Problem Statement
238. Product of Array Except Self
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

*/

//Code 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *arr = (int *)malloc(numsSize*sizeof(int));
    int prefix[numsSize];
    int suffix[numsSize];
    int i;

    //prefix [1,1,2,6] - left elements except the element (fill it from left) 
    //suffix [24,12,4,1] - right elements except self (fill it from right)
    //result [24,12,8,6]

    prefix[0] = 1;
    for(i=1; i<numsSize; i++){
        prefix[i] = prefix[i-1]*nums[i-1];
    }

    suffix[numsSize-1] = 1;
    for(i=numsSize-2; i>=0; i--){
        suffix[i] = suffix[i+1]*nums[i+1];
    }

    for(i=0; i<numsSize; i++) {
        arr[i] = prefix[i]*suffix[i];
    }

    *returnSize = numsSize;
    return arr;
}
