/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 10:13:34 PM PDT
 ************************************************************************/

#include"fun.h"
int main()
{
	Linklist *head,*sin, *eve;
	int n ;
	head = NULL ;
	printf("Please input the number of big list : ") ;
	scanf("%d",&n) ;
	
	printf("\nOrigin list : ") ;
	head = create(n) ;
	show(head);
	
	printf("\nDouble one : ") ;
	eve=even(head,n);
	show(eve) ;

	printf("\n") ;
	return 0 ;

}

