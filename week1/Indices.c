/*
Date - 17/oct/2026
Problem Link - https://leetcode.com/problems/find-target-indices-after-sorting-array/?envType=daily-question&envId=2026-10-19

Problem Statement
2089. Find Target Indices After Sorting Array
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.

 

Example 1:

Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.
Example 2:

Input: nums = [1,2,5,2,3], target = 3
Output: [3]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 3 is 3.
Example 3:

Input: nums = [1,2,5,2,3], target = 5
Output: [4]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 5 is 4.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i], target <= 100

*/

//Code 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, temp, flag, index = 0;
    int *arr = (int *)malloc(numsSize*sizeof(int));

    //Bubble Sort
    for(i=0; i<numsSize-1; i++) {
        flag = 0;
        for(j=0; j<numsSize-i-1; j++) {
            if (nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }

    //Now finding index of the number logic
    for (i=0; i<numsSize; i++) {
        if (nums[i] == target) {
            arr[index++] = i;
        }
    }

    *returnSize = index;
    return arr;
}
