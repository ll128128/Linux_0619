/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Thu 19 Jun 2014 01:21:43 AM PDT
 ************************************************************************/

#include"head.h"
int main(int argc ,char *argv [])
{
	double num ;
	printf("Please input the number : ") ;
	scanf("%lf",&num) ;
	printf("\nThe number you input is : %lf\n ", num ) ; 
	ftoc(num) ;	

	return 0 ;
}
