int* majorityElement(int* nums, int numsSize, int* returnSize){
int cand1, cand2, count1 = 0, count2 = 0, *res = (int*)malloc(sizeof(int)*3);
    
*returnSize = 0;
    
for (int i = 0; i < numsSize; i++)
{
    if(cand1 == nums[i]) count1++;
    else if (cand2 == nums[i]) count2++;
    else if (count1 == 0) ((cand1 = nums[i]) | (count1++));
    else if (count2 == 0) ((cand2 = nums[i]) | (count2++));
    else ((count1--) | (count2--));
}    

count1 = 0; count2 = 0;

for (int i = 0; i < numsSize; i++)
    if(cand1 == nums[i]) count1++;
    else if(cand2 == nums[i]) count2++;

if (count1 > (numsSize/3)) res[(*returnSize)++] = cand1;
if (count2 > (numsSize/3)) res[(*returnSize)++] = cand2;
                
return res;
}
