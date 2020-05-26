#include <stdio.h> 
#include <strlen.h>

char * addBinary(char * a, char * b){
    int lena=strlen(a);   //从内存的位置a开始扫描，直到碰到第一个字符串结束符'\0'为止，然后返回计数器值      
    int lenb=strlen(b);   ////从内存的位置b开始扫描，直到碰到第一个字符串结束符'\0'为止，然后返回计数器值
    int lenth=lena>lenb?lena+2:lenb+2;  //长度等于lena和lenb的较长者，加2是因为包含字符'\0'和可能有进位
    char *res=(char*)malloc(lenth*(sizeof(char)));  //定义了一个指针类型的变量res，并给该指针动态分配了一个字符的空间
    memset(res,'\0',lenth);      //对字符串res初始化,把res中所有字节换做字符“0”
    lenth-=2;                    //长度-2
    while(lena>0||lenb>0){
        int an=lena>0?a[--lena]-'0':0; //相当于两个指针指向a,b的尾部，短的那一个直接用0来补充
        int bn=lenb>0?b[--lenb]-'0':0;
        if(an+bn+res[lenth]+'0'=='1')  res[lenth--]='1';    //进行分类判断
        else if(an+bn+res[lenth]+'0'=='0') res[lenth--]='0';
        else if(an+bn+res[lenth]+'0'=='2') {res[lenth--]='0';res[lenth]='1'-'0';}
        else{res[lenth--]='1';res[lenth]='1'-'0';}


    }
  res[0]+='0';                     //res[0]+'0'
  if(res[0]!='1') res++;           //处理完了，看res[0]是否产生进位。没有进位直接将res++；
  return res;                      //返回res
}
int main(){

	char lena[100] = "11";

        char lenb[100] = "1";

	printf("%d\n",addBinary(lena, lenb));

	return 0;

}
