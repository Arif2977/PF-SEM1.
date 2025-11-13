void moveZeroes(int* nums, int numsSize) {
    int flag=1,k=0,temp;
    while (k<numsSize-1 && flag==1){
        flag=0;
        for(int i=0;i<numsSize-1;i++){
            if (nums[i]==0){
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
                flag=1;
            }
        }
        k++;
    }
}
