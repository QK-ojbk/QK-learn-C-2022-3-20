//1.字符串、数组，“\0”的存在
#define _CRT_SECURE_NO_WARNINGS 1
//数据在计算机存储时，存储的是2进制
#include<stdio.h>
#include<string.h>//用于字符串
int main()
{
	char arr1[]="abc";//"\0"是字符串的结束标志，不是内容，所以结果是3
	char arr2[]={'a','b','c'};
	//输出值为不可知，其运行时，依次abc为1、2、3，之后直到找到一个“\0”才会停止，此计算机为15是找到一个"\0"
	printf("%d\n",strlen(arr1));//strlen---string length字符串长度,计算字符串长度
	printf("%d\n",strlen(arr2));
	return 0;
}//结果是3和随机值
//如果上面改为char arr2[]={'a','b','c','\0'};则结果为两个3

//2.转义字符及“\”的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("c:\test\32\test.c\n");//由打印结果分析，因为“\t”是转义字符，意思是横向跳转到下一个制表位
	//"\"加上别的字母或数字，会变为转义字符，所以输出结果不是我们想要的
	//更改如下即可得到我们想要的，即讲“\”通过在其前面再加上一个"\"来使其转义成单纯的“\”表示
	printf("c:\\test\\32\\test.c\n");//此处“\n”为转义字符，表示为换行
	return 0;
}*/

//3.转义字符与ASCII值
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n",strlen("c:\test\32\test.c"));//“\t”和“\32”各是一个字符，共13个字符
	//“\32”是两个八进制数字，32作为八进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32转换位十进制为3*8^1+2*8^0=26;26作为ASCII码值代表的值，查表知该值为一个向右的箭头(此电脑演示为一个方框)
	printf("%c\n",'\32');//%c代表打印字符
	printf("%c\n",'\x61');//“\x61”是十六进制的表示方法
	return 0;
}*/

//4.if语句的使用
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//if语句的使用
{
	int input=0;
	printf("加入比特\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d",&input);//讲输入的数放到"input"的地址处
	if(input==1)//此处没有冒号
		printf("good offer\n");
	else
		printf("完蛋玩意儿\n");
	return 0;
}*/

//5.while循环语句，for循环语句，do-while语句
/*#define _CRT_SECURE_NO_WARNINGS 1
//三种循环：while语句循环，for语句循环，do-while语句循环
#include<stdio.h>
int main()
{
	int line=0;
	printf("加入南理工\n");

	while(line<200)
	{
		printf("学习:%d\n",line);
		line++;
	}
	if(line>200)
		printf("毕业\n");
	return 0;

}*/

//6.函数体，自定义函数
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x,int y)//下面大括号中的是函数体,此函数是自定义函数
{
	int z=x+y;
	return z;//return z,指返回函数为z值，且为整形（int）
}
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;
	scanf("%d%d",&num1,&num2);
	sum=Add(num1,num2);
	printf("sum=%d\n",sum);
	return 0;
}*/