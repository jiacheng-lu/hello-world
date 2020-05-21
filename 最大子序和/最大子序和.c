#include <stdio.h> 
#define MAX(a, b) ((a) > (b) ? (a) : (b))      //定义函数MAX(a,b)取a,b中较大者。
     int maxSubArray(int* nums, int numsSize)  
     {  
      int i=0;             //定义整型变量i=0
      int  iMAX=nums[0];     //给整型数组iMAX最大值赋初值
      int  iBig=nums[0];      //给整型数组iBIG更大值赋初值
       
       for(i=1;i<numsSize;i++)   //i从0递增的for循环
        {
            iBig = MAX(iBig + nums[i], nums[i]) ;

            if (iBig>iMAX)        //如果更大值比imax还大
            {
                iMAX=iBig;         //把更大值给max
            }
        }
     
    return iMAX;          //返回max

  

}

int main(){
char num[5000] = [-2,1,-3,4,-1,2,1,-5,4];
printf("%d\n",iMAX);
	return 0;



}
