
#include <stdio.h> 
 #include <string.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
        for(int i=digitsSize-1;i>=0;--i){             //从最后一位开始循环
            if(digits[i]==9){                         //如果最后一位为9
                digits[i]=0;                          //那么将它变成0
            }
            else{                                    
                digits[i]++;                         //否则只要加1就行
                *returnSize=digitsSize;              //返回指针的长度等于数组大小的个数
                return digits;                        //返回数字数组
            }
        }
        int *result=(int*)malloc(sizeof(int)*(digitsSize+1));   //定义一个整型指针result,申请4*(digitsSize+1)个字节的存储空间
        memset(result,0,(digitsSize+1)*sizeof(int));    //把digits里所有字节换做字符“0”
        result[0]=1;                                       //把整型数组result的第一位设置为1
        *returnSize=digitsSize+1;                       //返回指针的长度等于数组大小的个数+1
        return result;                                     //返回reslut
}

 main()
      {
       int* plusOne ="123";
       
   printf("%d\n",plusOne );
      
        return 0;
      }
      
      
  


