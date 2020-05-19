#include "stdio.h"
int searchInsert(int* nums, int numsSize, int target){
int  a=0,b=numsSize-1,mid;         //定义整型变量a,b 并给a赋初值0，b取nums的最大值
while(a<=b){                       //当二分法最左边的端点小于等于右边端点时
    mid=(a+b)/2;                   //取中值
    if(target >nums[mid])          //如果目标值在中值右边
    a=mid +1;                      //那么左端点变为中值+1
    else if(target<nums[mid])      //或者目标值在中值左边
    b=mid-1;                       //右端点取中值-1
    else return mid ;              //如果刚好取到中值则返回中值
}
return target<nums[mid]?mid:mid+1;  //当a>b时，如果目标值小于中位值则返回mid,否则返回mid+1 
}
main(){
  
  
  
  
}

