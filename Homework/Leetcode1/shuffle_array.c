/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    n=numsSize/2;
    int x[n];
    int y[n];
    for (int i=0;i<n;i++){
        x[i]=nums[i];
        y[i]=nums[i+n];
    }
    int k=0;
    for (int i=0;i<numsSize;i++){
        nums[i]=x[k];
        nums[i+1]=y[k];
        i++;
        k++;
    }
    *returnSize=numsSize;
    return nums;
}
