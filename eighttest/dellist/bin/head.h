/*************************************************************************
	> File Name: head.h
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 08:23:44 PM PDT
 ************************************************************************/

#ifndef __CHEN_C__
#define __CHEN_C__
#define N 10
#include<stdio.h>


typedef struct list
{
	int value ;
	struct list *next ;
}Linklist;


Linklist *create(int n) ;
Linklist *delect(Linklist *head1,int n1, Linklist *head2,int n2 ) ;
void show(Linklist *head) ;
#endif

