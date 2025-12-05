int evenNumberBitwiseORs(int* nums, int numsSize) {
    
    int i,or=0;
    for(i=0;i<numsSize;i++)
    {
     if((nums[i])%2==0)
        {
            or=or|nums[i];
        }
    }
    return or;
}
