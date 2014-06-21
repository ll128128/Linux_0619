/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 08:15:59 PM PDT
 ************************************************************************/

#include"head.h"
int main(int argc,char *argv[])
{
	char str1[N],str2[N];
	printf("Input strings \n") ;
	gets(str1);
	gets(str2);
	printf("\ninput over \n");
	strstr(str1,str2);
	printf("\nThe result : ") ;
	return 0 ;
}

