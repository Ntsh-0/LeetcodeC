/*
Date - 9/nov/2026
Problem Link - https://leetcode.com/problems/squares-of-a-sorted-array/submissions/?envType=problem-list-v2&envId=prshgx6i

Problem Statement
977. Squares of a Sorted Array
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
 

Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

*/

//Code 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *newArr = (int *)malloc(sizeof(int)*numsSize);
    int i, j;

    for(i=0; i<numsSize; i++) {
        nums[i] = nums[i]*nums[i];
    }
    i=0;
    j=numsSize-1;
    int index = numsSize-1;
    while(index>=0){
        if (nums[i] > nums[j]){
            newArr[index--] = nums[i];
            i++;
        }
        else if (nums[i] < nums[j]){
            newArr[index--] = nums[j];
            j--;
        }
        else{
            newArr[index--] = nums[j];
            j--;
        }
    }
    *returnSize = numsSize;
    return newArr;
}
