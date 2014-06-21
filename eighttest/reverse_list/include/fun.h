/*************************************************************************
	> File Name: fun.h
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 06:35:01 PM PDT
 ************************************************************************/

#ifndef __CHEN_C__
#define __CHEN_C__

#include<stdio.h>

typedef struct list
{
	int value ;
	struct list *next ;
}Linklist;

Linklist *create(int n ) ;
void show(Linklist *head) ;
Linklist *reverse(Linklist *head,int n ) ;

#endif 

