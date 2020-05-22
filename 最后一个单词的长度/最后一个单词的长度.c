#include <stdio.h> 
#include "strlen.h"
int lengthOfLastWord(char * s){
       if(!s || s=="") return 0;     //如果s=0或者s=空字符
        int len = strlen(s);         //调用strlen计算字符串s中元素的个数
        int i,j;                      //定义整数变量i,j
        for(i=len-1;i>=0&&s[i]==' ';i--);        //从最大值开始（去掉尾部空格部分） 得到i
        for(j=i;j>=0 && s[j]!=' ';j--);           //当j到达第二个空格时，停止计数
        return i-j;                      //返回最后一个字母的值

}

int main(){

char lengthOfLastWord[1000] = ['Hello World'];

printf("%d\n",lengthOfLastWord);

	return 0;







}
