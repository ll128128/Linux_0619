/*************************************************************************
	> File Name: fun.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Thu 19 Jun 2014 04:32:59 AM PDT
 ************************************************************************/
#include"head.h"
#include<math.h>
void ctof(char a[N])
{
	double num ;
	int  i,j,k,l,m,len, in[N];
	i = 0 ;
	j = 0 ;
	len = strlen(a) ;
	while(a[i]!='.')
	{
		
		in[j]=a[i]-48;
		i++;
		j++;
	}
	k=i;
	i++;
	for(l=i;l < len; l++) 
	{
		in[j]=a[l]-48;
		j++;
	}
	printf("After \n") ;
	num = 0 ;
	for(m=0;m<k;m++)
	{
		num = num + in[m]*pow(10.0,(double)(k-m-1)) ;
	}
	printf("%lf",num) ;
	for(m=k;m<len-1;m++)
	{
		num = num + in[m] / pow(10,m-k+1);
	}
	printf("\nNum=%lf\n",num) ;
}
