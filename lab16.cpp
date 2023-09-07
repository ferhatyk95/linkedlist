/*Write a program in C to add two numbers using pointers.*/
#include<stdio.h>
int main()
{
	int a,b;
	int *aptr,*bptr;
	aptr=&a;
	bptr=&b;
	printf("a sayisini giriniz=\n");
	scanf("%d",aptr);
	printf("b sayisini giriniz=\n");
	scanf("%d",bptr);
	
	printf("%d", *aptr + *bptr);
	return 0;
	
	
}
