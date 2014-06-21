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
		scanf("%d", &curr -> value) ;
		curr -> next = head ;
		head = curr ;
	}
	return head ;
}

Linklist *combine(Linklist *up,int un, Linklist *low, int ln)
{
	int n ;
	int i, j, k;
	int a[N];
	Linklist *curru, *pre,*com, *curr, *insert;
	
	curru = low ;
	i=0 ;
	while(curru != NULL)
	{
		a[i] = curru -> value ;
		i++;
		curru = curru -> next ;
	}

	com = up ;
	for(j=0;j<ln;j++)
	{
		if(a[j] <= com -> value )
		{
			insert = (Linklist *) calloc (1, sizeof( Linklist )) ;
			insert -> value = a[j] ;
			insert -> next = com ;
			com = insert ;
		}
		curr = com ;
		while ( curr != NULL)
		{
			if ( a[j] > curr -> value && curr -> next != NULL &&  a[j] <= curr -> next -> value )
			{
				insert = (Linklist *) calloc (1, sizeof (Linklist )) ;
				insert -> value = a [j] ;
				insert -> next = curr -> next ;
				curr -> next = insert ;
				break ;
			}
			else if( a[j] > curr -> value && curr -> next == NULL )
			{
				insert = (Linklist * ) calloc (1, sizeof ( Linklist )) ;
				insert -> value = a [j] ;
				curr -> next = insert ;
				curr = insert ;
				break ;
			}
			else 
				curr = curr -> next ;
		}
	}
	return com ;
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
