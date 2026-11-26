/*
Date - 25/nov/2026
Problem Link - https://leetcode.com/problems/left-and-right-sum-differences/submissions/2203364249/

Problem Statement
2574. Left and Right Sum Differences
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a 0-indexed integer array nums of size n.

Define two arrays leftSum and rightSum where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 105

*/

//Code 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int i, leftSum = 0, rightSum = nums[0];
    int *arr = (int *)malloc(sizeof(int)*numsSize);

    for(i=1; i<numsSize; i++){
        rightSum += nums[i];
    }

    for(i=0; i<numsSize; i++){
        if (i!=0){
            leftSum += nums[i-1];
        }
        rightSum -= nums[i];
        arr[i] = abs(leftSum-rightSum);
    }

    *returnSize = numsSize;
    return arr;
}
