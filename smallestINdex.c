int checkSum(int x) {
    int sum = 0;
    while (x > 0){
        sum = sum + x%10;
        x = x/10;
    }
    return sum;
}

int smallestIndex(int* nums, int numsSize) {
    int i;

    for (i=0; i<numsSize; i++) {
        if (i == checkSum(nums[i]))
            return i;
    }
    return -1;
}
