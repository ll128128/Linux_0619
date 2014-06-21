/*************************************************************************
	> File Name: fun.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 06:40:20 PM PDT
 ************************************************************************/

#include"fun.h"
Linklist *create(int n) 
{
	int count ;
	Linklist *head,*curr ;
	head=NULL ;
	n = 8 ;
	for(count=0;count<n;count++)
	{
	    curr=(Linklist*)calloc(1,sizeof(Linklist)) ;
		curr -> value = ( count + 1 ) ;
		curr -> next = head ;
		head = curr ;
	}
	return head ;
}
void show(Linklist *head)
{
	Linklist *curr ;
	curr = head ;
	while(curr != NULL)
	{
		printf("%d  ",curr->value) ;
		curr = curr -> next ;
	}
}
Linklist *reverse(Linklist *head, int n )
{
	Linklist *curr ;
	int a[n] ;
	int i=7 ;
	curr=head;
	while(curr!=NULL)
	{
		a[i]=curr->value;
		i--;
		curr=curr->next ; 		
	}
	curr=head;
	for(i=0;i<n;i++)
	{
		curr->value=a[i];
		curr=curr->next;
	}
	return head ;
}
