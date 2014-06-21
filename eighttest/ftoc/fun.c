/*************************************************************************
	> File Name: fun.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Thu 19 Jun 2014 01:28:17 AM PDT
 ************************************************************************/

#include"head.h"
#define N 100
double ftoc(double num) 
{
	char a[N] ;
	int  n,  ni, i ,nj, k, tmp;
	n = (int)(num) ;
	ni = (int)(num) ;
	i = 0 ;
	while( ni / 10 != 0 )
	{ 
		nj = ni % 10 ;
		a [i] = nj + 48 ; 
		i ++ ;
		ni = ni / 10 ;
	}
    a[i] = ni+48 ;
	i ++ ; 
	for(k=0;k<i/2;k++)
	{
		tmp = a[k] ;
		a[k] = a[i-k-1];
		a[i-k-1] = tmp ;
	}
	a [i] = '.' ;
	i ++ ;
	
	num = num - (double)n ; 
	while(num*10>0.001)
	{
		n = (int)(num*10) ;
		a[i] = n+48 ;
		i++ ;
		num = num*10 - (double)n ;
	}
	printf("\nAfter change : ") ;
	for(k=0;k<i;k++)
	{
		printf("%c",a[k]);
	}
}
