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
	for(count=0;count<n;count++)
	{
	    curr=(Linklist*)calloc(1,sizeof(Linklist)) ;
		curr -> value = ( count + 1 ) ;
		curr -> next = head ;
		head = curr ;
	}
	return head ;
}
Linklist *even(Linklist *head, int n)
{
	Linklist *even, *curr, *currs;
	curr = head ;
	even = NULL ;
	while( curr != NULL)
	{
		currs = (Linklist *)calloc (1,sizeof(Linklist )) ;
		currs = curr ;
		curr = curr -> next -> next ;
		currs -> next = even ;
		even = currs ;

	}
	return even ;
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

