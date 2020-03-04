

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize){ 
    *returnSize = 0;
    int* ans = malloc(sizeof(int) * numsSize);
    
    for(int i = 0; i < numsSize; i++) {
        int val = nums[i];
        val = val < 0 ? -val : val;
        
        int value = nums[val - 1];
        
        if(value < 0) { 
            ans[(*returnSize)++] = val;   
        }
        else nums[val - 1] = -value; 
    }
    
    return ans;
}
 