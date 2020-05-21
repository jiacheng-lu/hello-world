#include <stdio.h> 
char * countAndSay(int n){
    char *mark=(char *)malloc(sizeof(char)*5000);      //为5000个char类型的变量申请存储空间并存在mark指针中
    char *temp=(char *)malloc(sizeof(char)*5000);      //为5000个char类型的变量申请存储空间并存在temp指针中
    mark[0]='1';                                       //定义mark的第一个数值为1
    mark[1]='\0';                                      
    int i,count,j;                                     //定义整型变量i，count,j
    char key, *p;                                      //定义字符型变量key，*P
    for(i=1;i<n;i++)                                   //循环
    { j=0;                                             //给j赋初值0
    key=mark[0];                                       //key用来标志当前的字符
    count=0;                                           //从0开始记录个数
    p=mark;                                            //将mark的内容给P
    while(*p!='\0')                                    //当指针P不为空值时
    {
        if(*p==key)                                     //如果*p=key
           count++;                                      //计数+1
           else{
               temp[j++]=count+ '0';                     //否则将count+0赋给中间变量TEMP，j+1
               count=1;                                  //给count取值1
               temp[j++]=key;                            //将关键字的值存入temp
               key=*p;                                   //再把*P的值转给key
           }
           p++;                                           //p+1
        
    }
     temp[j++]=count+'0';                                   //当*P=0时，存计数器的值
     temp[j++]=key;                                         //存关键字的值
     temp[j]='\0';                                          //
     strcpy(mark,temp);                                     //把temp移给mark
   }
   return mark;                                            //返回mark
}

int main(){



        char temp[5000] = "1";

	printf("%d\n",countAndSay(mark, temp));

	return 0;

}
