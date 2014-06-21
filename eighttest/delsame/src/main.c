/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 11:48:15 PM PDT
 ************************************************************************/

#include"fun.h"
int main()
{
	Linklist *head ;
	int n ;
	printf("Please input the account of list : ") ;
	scanf("%d", &n) ;
	head = create (n) ;
	printf("The origin : ") ;
	show ( head ) ;
	printf("\n") ;

	head = delsame(head,n) ;
	printf("After delete the same element : ") ;
	show (head) ;
	printf("\n") ;

	return 0 ;
}
