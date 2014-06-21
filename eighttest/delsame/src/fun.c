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
		scanf("%d",&curr -> value ) ;
		curr -> next = head ;
		head = curr ;
	}
	return head ;
}

Linklist *delsame(Linklist *head, int n)
{
	int a[n];
	Linklist *curr ;
	int i,j,k ;
	curr = head ;
	i = 0 ;
	while( curr != NULL )
	{
		a[i] = curr -> value ;
		curr = curr ->next ;
		i ++;
	}
	printf("\nArray : ") ;
	
	for(j=0;j<i;j++)
	{
		printf("%d  ",a[j]);
	}
	printf("\n") ;
	
	for(j=0; j<i-1; j++) 
	{
		if( a[j] == a[j+1] )
		{
			for( k = j+1; k < i; k  ++ )
			{
				a [k] = a [k+1] ;
			}
			i--;
			j--;
		}
	}
	printf("I=%d\n" , i ) ;
	printf("J=%d\n", j )  ;
	head = NULL ;
	for(j=0;j<i;j++)
	{
		curr = (Linklist *) calloc (1,sizeof (Linklist)) ;
		curr -> value = a[j] ;
		curr -> next = head ;
		head = curr ;
	}
	printf("\n") ;
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

