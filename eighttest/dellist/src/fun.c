/*************************************************************************
	> File Name: fun.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 08:39:39 PM PDT
 ************************************************************************/

#include"head.h"

Linklist *create (int n ) 
{
	Linklist *head,*curr;
	int count ;
	head = NULL ;
	for(count=0;count<n;count++)
	{
		curr=(Linklist*)calloc(1,sizeof(Linklist)) ;
		scanf("%d",&curr->value);
		curr->next=head ;
		head = curr ;
	}
	return head ;
}

Linklist *delete(Linklist *head1,int n1,Linklist *head2,int n2)
{
	Linklist *curr, *del, *pre ;
	int a[n2];
	int j, i = 0 ; 
	curr = head2 ;
	while(curr != NULL )
	{
		a[i] = curr -> value ;
		curr = curr -> next ;
		i++ ;
	}
	for(j=0;j<n2;j++)
	{
		if(head1->value == a[j])
		{
			head1 = head1 -> next ;
		}
		else
		{
			pre = head1 ;
			del = head1 -> next ;
			while( del != NULL )
			{
				if( del->value == a[j] )
				{
					pre -> next = del -> next;
					free(del); 
				}
				else
				{
					pre = pre -> next ;
					del = del -> next ;
				}
			}
		}
	}
	return head1 ; 
}


void show(Linklist *head )
{
	Linklist *curr ;
	curr = head ;
	while( curr != NULL )
	{
		printf("%d",curr -> value) ;
		curr = curr -> next ;
	}
}
