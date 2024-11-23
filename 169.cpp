//169. Majority Element
#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int majorityElement(int* nums, int numsSize) {
    // Sort the array using qsort
    qsort(nums, numsSize, sizeof(int), compare);

    // Return the element at the middle, which will be the majority element
    return nums[numsSize / 2];
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};  // Example input
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = majorityElement(nums, numsSize);  // Call the majorityElement function
    printf("Majority Element: %d\n", result);      // Print the result

    return 0;
}
