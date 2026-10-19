/*
Date - 14/oct/2026
Problem Link - https://leetcode.com/problems/sort-colors/description/

Problem Statement
75. Sort Colors
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]

Output: [0,0,1,1,2,2]

Explanation:

The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.

Example 2:

Input: nums = [2,0,1]

Output: [0,1,2]

Explanation:

The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.

 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2

*/

//Code

void sortColors(int* nums, int numsSize) {
    int i, red=0, white=0, blue=0;
    int j,k,l;

    for(i=0; i<numsSize; i++) {
        if (nums[i] == 0)
            red++;
        else if (nums[i] == 1)
            white++;
        else
            blue++;
    }

    //overwriting the array after counting each number frequenscy
    j=0, k=red, l=red+white;
    for (i=0; i<numsSize; i++) {
        if (i<k)
            nums[i] = 0;
        else if (i<l) {
            nums[i] = 1;
        }
        else
            nums[i] = 2;
    }
}
//we can also do it with 2 pointers which is recommended method where we send all 0 to left side and all 2 to right side the 1 balances itself.

    //This method has errors
    // j=0, k=red, l=red+white;
    // for (i=0; i<numsSize; i++) {
    //     int temp = nums[i];
    //     if (nums[i] == 0) {
    //         if (numsSize > j) {
    //         nums[i] = nums[j];
    //         nums[j++] = temp;}
    //     }
    //     else if (nums[i] == 1) {
    //         if (numsSize > k) {
    //         nums[i] = nums[k];
    //         nums[k++] = temp;}
    //     }
    //     else {
    //         if (numsSize > l){
    //         nums[i] = nums[l];
    //         nums[l++] = temp;}
    //     }
    // }
    //}
