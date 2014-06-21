/*************************************************************************
	> File Name: main.c
	> Author: Chenfan
	> Mail:994735640@qq.com 
	> Created Time: Wed 18 Jun 2014 06:53:27 PM PDT
 ************************************************************************/

#include"fun.h"
int main(int argc, char *argv[])
{
	Linklist *head;
	int n ;
	n = 8 ;
	//head = (Linklist *)calloc(1,sizeof(Linklist)) ; 
	head = create(8) ;
	printf("The origin ; ") ;
	show( head ) ;
	head = reverse(head,8) ;
	printf("After reverse : ")  ;
	show(head) ;
	return 0 ; 
}

