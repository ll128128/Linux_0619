/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 10:29:23 PM PDT
 ************************************************************************/

#include"fun.h"
int main()
{
	Linklist *up,*low,*head;
	int un,ln;
	printf("Please input the up list account : ") ;
	scanf("%d",&un);
	up = create (un) ;
	printf("\nThe up list : ");
	show(up) ;
	
	printf("\nPlease input the down list account : ") ;
	scanf("%d",&ln) ;
	low = create (ln) ;
	printf("\nThe down list : ");
	show(low);

	printf("\nAfter combine : ") ;
	head = combine(up,un,low,ln) ;
	show(head);
	printf("\n") ;
	return 0 ; 


}

