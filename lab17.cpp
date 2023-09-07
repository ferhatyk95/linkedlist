/*- Write a program in C to store n elements in an array and print the elements using pointer.*/
#include<stdio.h>
int main()
{
	int dizi[5];
	int *p;
	int i;
	p=dizi;
	printf("dizi elemanlarini giriniz=\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &dizi[i]);
	}
	//dizi elemanlarýný pointer ile göster 
	for(i=0;i<5;i++)
	{
		printf("%d\n", p[i]);
	}
}
