/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 07:57:08 PM PDT
 ************************************************************************/

#include"head.h"

void strstr(char str1[N], char str2[N])
{
	int len1,len2;
	int i,j,k;
	char search[N];
	len1=strlen(str1);
	len2=strlen(str2);
	k=0;
	for(i=0;i<len1;i++)
	{
		while(i<=(len1-len2))
		{
			for(j=i;j<len2+i;j++)
			{
				search[k]=str1[j];
				k++;
			}
			if(strcmp(search,str2)==0)
			{
				printf("\nThe first location is %d\n",i) ;
			}
		}
	}
	if(i==(len1-len2+1))
		printf("\nNo\n");
}
