/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 09:38:38 PM PDT
 ************************************************************************/

#include"head.h"
int main()
{
	Linklist *head, *head1,*head2;
	int n1,n2;
	printf("Please input the account of list one : ") ;
	scanf("%d",&n1) ;
	printf("Please input the account of list two : ") ;
	scanf("%d",&n2) ;
	printf("\nPlease input the number of list one \n");
	head1 = create(n1) ;
	printf("\nPlease input the number of list two \n") ;
	head2 = create(n2) ;
	printf("Show\n") ;
	show(head1) ;
	printf("\n") ;
	show(head2) ;
	printf("\n") ;
	
	head = delete(head1,n1,head2,n2) ;
	printf("Result : ") ;
	show(head);
	
	return 0; 
}
