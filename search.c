class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = size(nums)-1;
        int mid;
        while (i <= j) {
            mid = (int)((i+j)/2);
            if (nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target) {
                j = mid - 1;
            }
            else {
                i = mid + 1;
        }
    }
    return i;
    }
};
