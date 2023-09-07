/*- Write a program in C to swap elements using call by reference*/
#include<stdio.h>
int main()
{
	int dizi[10], i,temp;
	int *p;
	p = dizi;
	printf("dizi elemanlarini giriniz=\n");
	for(i=0 ; i<10 ; i++)
	{
		scanf("%d",&dizi[i]);
		
	}
	//dizi elemanlarýný çevirme
	printf("dizinin tersi=\n");
	for(i=0 ; i<10/2 ; i++)
	{
		temp = *(p+i);
		*(p+i) = *(p+9-i);
		*(p+9-i) = temp;
	
	}
	for(i=0 ; i<10 ; i++)
	{
		printf("%d \n", *(p+i));
	}
	
}
