/*
Date - 10/oct/2026
Problem Link - https://leetcode.com/contest/biweekly-contest-193/problems/maximum-product-pair-with-target-sum/description/

Problem Statement
Q1. Maximum Product Pair With Target Sum
Easy
3 pt.
You are given an integer array nums and an integer target.

A pair of distinct indices (i, j) is valid if:

nums[i] + nums[j] == target
nums[i] > nums[j]
Return a valid pair [i, j] whose product nums[i] * nums[j] is maximum among all valid pairs. If no valid pair exists, return [-1, -1].

If multiple valid pairs achieve the maximum product, you may return any of them.

 

Example 1:

Input: nums = [1,2,3,4], target = 5

Output: [2,1]

Explanation:

There are 2 valid pairs:

No.	(i, j)	nums[i]	nums[j]	Sum	Product
1	(3, 0)	4	1	5	4
2	(2, 1)	3	2	5	6
Both pairs sum to 5 and satisfy nums[i] > nums[j]. The second pair has the larger product, 3 * 2 = 6, so the answer is [2, 1].

Example 2:

Input: nums = [-3,-1,4,2], target = 1

Output: [3,1]

Explanation:

There are 2 valid pairs:

No.	(i, j)	nums[i]	nums[j]	Sum	Product
1	(2, 0)	4	-3	1	-12
2	(3, 1)	2	-1	1	-2
Since -2 > -12, the pair at indices (3, 1) is chosen and the answer is [3, 1].

Example 3:

Input: nums = [3,3,5], target = 6

Output: [-1,-1]

Explanation:

​​​​​​​No valid pair exists, since nums[0] and nums[1] sum to 6 but are equal.

 

Constraints:

2 <= nums.length <= 100
-100 <= nums[i], target <= 100

*/

//Code 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxProductPair(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, product=1, flag=0;
    int *pair = (int *)malloc(2*sizeof(int));
    pair[0] = -1;
    pair[1] = -1;
    *returnSize = 2;

    for (i=0; i<numsSize-1; i++) {
        for (j=i+1;j<numsSize; j++) {
            if ((nums[i] + nums[j]) == target && nums[i] != nums[j]) {
                if (flag == 0) {
                    product = nums[i]*nums[j];
                    flag = 1;
                    if (nums[i] > nums[j]){
                        pair[0] = i;
                        pair[1] = j;
                    }else{
                        pair[0] = j;
                        pair[1] = i;
                    }    
                }
                else if((nums[i] * nums[j]) > product){
                    product = nums[i]*nums[j];
                    if (nums[i] > nums[j]){
                        pair[0] = i;
                        pair[1] = j;
                    }else{
                        pair[0] = j;
                        pair[1] = i;
                    }
                }
            }
        }
    }
    return pair;
}
