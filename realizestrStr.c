#include  <realizestrStr.h>
#include <stdint.h> 

int strStr(char * haystack, char * needle){

 if(*needle==0)    return 0;        //如果needle是空字符，返回0
 if(*haystack==0) return -1;       //如果haystack是空字符串，返回-1 

 
char *head=haystack;               //定义haystack的头指针
int offset;                        //定义一个整形变量offset
while(*haystack) {                  //当haystack里的某个元素不为空字符时(遍历haystack里的每个元素)
       offset=0;                    //给offset赋初值为0
       while(1){                    //死循环     
       if(needle[offset]==0)   return haystack-head;      //一直执行到needle最后一个数，返回haystack-0   
       if(haystack[offset]==0) return -1;                 //一直执行到haystack最后一个数
       if(haystack[offset]!=needle[offset])  break;       //如果haystack和needle的第offset个数不相等，就跳出if.
       offset++;                      //offset+1
       }
       haystack++;                   //haystack+1
}
return -1;                          //当haystack=0时，返回-1
}
