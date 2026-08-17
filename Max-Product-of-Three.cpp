//https://leetcode.com/problems/maximum-product-of-three-numbers/?envType=problem-list-v2&envId=array

#include <stdlib.h>
#include <stdio.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int maximumProduct(int* nums, int numsSize) {
    // Sort the array in ascending order
    qsort(nums, numsSize, sizeof(int), compare);
    
    // Option 1: Product of the three largest numbers
    int option1 = nums[numsSize - 1] * nums[numsSize - 2] * nums[numsSize - 3];
    
    // Option 2: Product of the two smallest (most negative) and the largest
    int option2 = nums[0] * nums[1] * nums[numsSize - 1];
    
    // Return the maximum of the two options
    return (option1 > option2) ? option1 : option2;
}
