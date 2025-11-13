/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int swap= 1,k=0,temp;
    for(int i=0;i<numsSize;i++){
        nums[i]=nums[i]%2;
    }
    while(swap==1 && k<numsSize-1){
        swap=0;
        for(int i=0;i<numsSize-1;i++){
            if (nums[i]>nums[i+1]){
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                swap=1;
            }
        }
        k++;
    }
    *returnSize=numsSize;
    return nums;
}
